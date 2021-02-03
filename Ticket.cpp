//
// Created by jihee on 1/22/2021.
//

#include "Ticket.h"

int Ticket::counter = 1;

Ticket::Ticket(const std::string &date, const std::shared_ptr<Employee> &reporter, const std::string &problem) : id(
        ++counter), date(
        date), reporter(reporter), problem(problem) {}

Ticket::~Ticket() {

}

int Ticket::get_id() const {
    return id;
}

const std::shared_ptr<Employee> &Ticket::get_reporter() const {
    return reporter;
}

const std::string &Ticket::get_problem() const {
    return problem;
}

const std::shared_ptr<HelpdeskEmployee> &Ticket::get_solver() const {
    return solver;
}

const std::string &Ticket::get_fix_description() const {
    return fix_description;
}

bool Ticket::is_solved() const {
    return solver != nullptr;
}

void Ticket::solve(std::shared_ptr<HelpdeskEmployee> &solver, std::string description) {
    if(is_solved()){
        throw std::runtime_error("The ticket is already solved!");
    }
    this->solver = solver;
    fix_description = description;
}

void Ticket::print_ticket(std::ostream &out, const std::string &indentation) {
    out << indentation << "Status: " << (is_solved() ? "Solve" : "Open") << std::endl;
    out << indentation;
    reporter->print_employee(out);
    out << ": " << problem << std::endl;
    if (is_solved()) {
        out << indentation;
        solver->print_employee(out);
        out << ": " << fix_description << std::endl;
    }

}



