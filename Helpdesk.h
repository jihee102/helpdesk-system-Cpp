//
// Created by jihee on 1/22/2021.
//

#ifndef HELPDESK_HELPDESK_H
#define HELPDESK_HELPDESK_H


#include <memory>
#include <map>
#include "Employee.h"
#include "Ticket.h"

class Helpdesk {
private:
    std::map<std::string, std::shared_ptr<Employee>> employees;
    std::map<int, std::shared_ptr<Ticket>> tickets;

public:
    Helpdesk();

    ~Helpdesk();

    std::shared_ptr<Employee> find_employee(const std::string &name) const;

    std::shared_ptr<Ticket> find_ticket(int ticket_id) const;

    void add_employee(const std::string &name, const std::string &password, const std::string &department);

    void add_helpdesk_employee(const std::string &name, const std::string &password,
                               const std::string &expertise);

    void add_software_ticket(const std::string &date, const std::string &reporter, const std::string &problem,
                             const std::string &application);

    void add_hardware_ticket(const std::string &date, const std::string &reporter, const std::string &problem,
                             int machine);

    void solve_ticket(int ticket_id, const std::string &solver, const std::string &description);

    void print_all_employees(std::ostream &out, const std::string &indentation = "") const;

    void print_all_tickets(std::ostream &out, const std::string &indentation = "") const;

};


#endif //HELPDESK_HELPDESK_H
