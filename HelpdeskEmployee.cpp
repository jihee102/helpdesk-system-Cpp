//
// Created by jihee on 1/22/2021.
//

#include "HelpdeskEmployee.h"

HelpdeskEmployee::HelpdeskEmployee(const std::string &name, const std::string &password,
                                   const std::string &expertise) : Employee(name, password, "IT"),
                                                                   expertise(expertise) {}

HelpdeskEmployee::~HelpdeskEmployee() {

}

void HelpdeskEmployee::print_employee(std::ostream &out) {
    out << get_name() << "( " << get_department() << ", Expertise: "<< expertise << " )" ;

}
