//
// Created by jihee on 1/22/2021.
//

#ifndef HELPDESK_HELPDESKEMPLOYEE_H
#define HELPDESK_HELPDESKEMPLOYEE_H
#include "Employee.h"

class HelpdeskEmployee : public Employee {
private:
    std::string expertise;

public:
    HelpdeskEmployee(const std::string &name, const std::string &password,
                     const std::string &expertise);

    ~HelpdeskEmployee();

    void print_employee(std::ostream &out) override;
};


#endif //HELPDESK_HELPDESKEMPLOYEE_H
