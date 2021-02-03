//
// Created by jihee on 1/22/2021.
//

#ifndef HELPDESK_TICKET_H
#define HELPDESK_TICKET_H

#include <memory>
#include <ostream>
#include "Employee.h"
#include "HelpdeskEmployee.h"

class Ticket {
private:
    static int counter;
    int id;
    std::string date;
    std::shared_ptr<Employee> reporter;
    std::string problem;
    std::shared_ptr<HelpdeskEmployee> solver;
    std::string fix_description;

public:
    Ticket(const std::string &date, const std::shared_ptr<Employee> &reporter, const std::string &problem);
    virtual ~Ticket();

    int get_id() const;

    const std::shared_ptr<Employee> &get_reporter() const;

    const std::string &get_problem() const;

    const std::shared_ptr<HelpdeskEmployee> &get_solver() const;

    const std::string &get_fix_description() const;

    bool is_solved() const;

    void solve(std::shared_ptr<HelpdeskEmployee> &solver, std::string description);

    virtual void print_ticket(std::ostream & out, const std::string &indentation ="");
};


#endif //HELPDESK_TICKET_H
