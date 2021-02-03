//
// Created by jihee on 1/22/2021.
//

#include "Employee.h"

Employee::Employee(const std::string &name, const std::string &password, const std::string &department) : name(name),
                                                                                                          password(
                                                                                                                  password),
                                                                                                          department(
                                                                                                                  department) {}



Employee::~Employee() {
    std::cout << "Cleaning employee " << name << std::endl;
}

const std::string &Employee::get_name() const {
    return name;
}

const std::string &Employee::get_department() const {
    return department;
}

void Employee::print_employee(std::ostream &out) {
    out  <<get_name() << "( " << get_department() << " )" ;

};
