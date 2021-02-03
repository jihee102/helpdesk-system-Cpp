//
// Created by jihee on 1/22/2021.
//

#include "Helpdesk.h"
#include "SoftwareTicket.h"
#include "HardwareTicket.h"

Helpdesk::Helpdesk() {}

Helpdesk::~Helpdesk() {
}

std::shared_ptr<Employee> Helpdesk::find_employee(const std::string &name) const {
    auto iterator = employees.find(name);
    return iterator == employees.cend() ? nullptr : iterator->second;
}

std::shared_ptr<Ticket> Helpdesk::find_ticket(int ticket_id) const {
    auto iterator = tickets.find(ticket_id);
    return iterator == tickets.cend() ? nullptr : iterator->second;
}


void Helpdesk::solve_ticket(const int ticket_id, const std::string &solver, const std::string &description) {
    auto employee = find_employee(solver);

    if (!employee) {
        throw std::runtime_error("Employee doesn't exist!");
    }

    auto ticket = find_ticket(ticket_id);

    if (!ticket) {
        throw std::runtime_error("Ticket doesn't exist! -"+ ticket_id );
    }

    auto helpdesk_employee = std::dynamic_pointer_cast<HelpdeskEmployee>(employee);
    if(!helpdesk_employee){
        throw std::runtime_error("Only helpdesk employee can solve the ticket!");
    }

    ticket->solve(helpdesk_employee, description);

}

void Helpdesk::add_employee(const std::string &name, const std::string &password, const std::string &department) {
    auto existing_employee = find_employee(name);
    if (existing_employee) {
        throw std::runtime_error("Employee already exist!");
    }

    std::shared_ptr<Employee> employee = std::make_shared<Employee>(name, password, department);
    employees[name] = employee;
}

void
Helpdesk::add_helpdesk_employee(const std::string &name, const std::string &password,
                                const std::string &expertise) {
    auto existing_employee = find_employee(name);
    if (existing_employee) {
        throw std::runtime_error("Employee already exist!");
    }

    std::shared_ptr<Employee> employee = std::make_shared<HelpdeskEmployee>(name, password,expertise);
    employees[name] = employee;

}

void Helpdesk::add_software_ticket(const std::string &date, const std::string &reporter, const std::string &problem,
                                   const std::string &application) {
    auto employee = find_employee(reporter);
    if (!employee) {
        throw std::runtime_error("Employee doesn't exist! -"+ reporter);
    }

    std::shared_ptr<Ticket> ticket = std::make_shared<SoftwareTicket>(date,employee, problem, application );
    tickets[ticket->get_id()] = ticket;

}

void Helpdesk::add_hardware_ticket(const std::string &date, const std::string &reporter, const std::string &problem,
                                   int machine) {
    auto employee = find_employee(reporter);
    if (!employee) {
        throw std::runtime_error("Employee doesn't exist! -"+ reporter);
    }

    std::shared_ptr<Ticket> ticket = std::make_shared<HardwareTicket>(date,employee, problem, machine );
    tickets[ticket->get_id()] = ticket;
}

void Helpdesk::print_all_employees(std::ostream &out, const std::string &indentation) const {
    out << "Employees: "<< std::endl;
    for(auto iterator = employees.cbegin(); iterator != employees.cend(); iterator++){
       out<< indentation+"\t" ;
       iterator->second->print_employee(out);
        out<< std::endl;
    }

}

void Helpdesk::print_all_tickets(std::ostream &out, const std::string &indentation) const {
    out << "Tickets: "<< std::endl;
    for(auto iterator = tickets.cbegin(); iterator != tickets.cend(); iterator++){
        iterator->second->print_ticket(out, indentation+"\t");
        out<< std::endl;
    }
}

