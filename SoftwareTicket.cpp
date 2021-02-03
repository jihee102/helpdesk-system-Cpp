//
// Created by jihee on 1/22/2021.
//

#include "SoftwareTicket.h"

SoftwareTicket::SoftwareTicket(const std::string &date, const std::shared_ptr<Employee> &reporter,
                               const std::string &problem, const std::string &application) : Ticket(date, reporter,
                                                                                                    problem),
                                                                                             application(application) {}

SoftwareTicket::~SoftwareTicket() {

}

void SoftwareTicket::print_ticket(std::ostream &out, const std::string &indentation) {
    out << indentation << "Ticket" << get_id() << " ( Softwareticket, Application: " <<application<< ") :"<< std::endl;
    Ticket::print_ticket(out, indentation+"\t");
}

