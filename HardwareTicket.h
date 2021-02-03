//
// Created by jihee on 1/22/2021.
//

#ifndef HELPDESK_HARDWARETICKET_H
#define HELPDESK_HARDWARETICKET_H


#include "Ticket.h"

class HardwareTicket : public Ticket{
private:
    int machine;

public:
    HardwareTicket(const std::string &date, const std::shared_ptr<Employee> &reporter, const std::string &problem,
                   int machine);

    virtual ~HardwareTicket();

    void print_ticket(std::ostream &out, const std::string &indentation) override;
};


#endif //HELPDESK_HARDWARETICKET_H
