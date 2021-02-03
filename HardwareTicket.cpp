//
// Created by jihee on 1/22/2021.
//

#include "HardwareTicket.h"

HardwareTicket::HardwareTicket(const std::string &date, const std::shared_ptr<Employee> &reporter,
                               const std::string &problem, int machine) : Ticket(date, reporter, problem),
                                                                          machine(machine) {}

HardwareTicket::~HardwareTicket() {

}

void HardwareTicket::print_ticket(std::ostream &out, const std::string &indentation) {
    out << indentation << "Ticket" << get_id() << " ( Hardwareticket, ComputerId: " <<machine<< ") :"<< std::endl;
    Ticket::print_ticket(out, indentation+"\t");
}
