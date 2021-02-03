//
// Created by jihee on 1/22/2021.
//

#ifndef HELPDESK_EMPLOYEE_H
#define HELPDESK_EMPLOYEE_H

#include <iostream>

class Employee {
private:
    std::string name;
    std::string password;
    std::string department;

public:
    Employee(const std::string &name, const std::string &password, const std::string &department);
    ~Employee();

    const std::string &get_name() const;

    const std::string &get_department() const;

    virtual void print_employee(std::ostream &out);


};


#endif //HELPDESK_EMPLOYEE_H
