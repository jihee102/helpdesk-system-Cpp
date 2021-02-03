//
// Created by jihee on 1/22/2021.
//

#ifndef HELPDESK_SOFTWARETICKET_H
#define HELPDESK_SOFTWARETICKET_H


#include "Ticket.h"

class SoftwareTicket : public Ticket{
private:
    std::string application;

public:
    SoftwareTicket(const std::string &date, const std::shared_ptr<Employee> &reporter, const std::string &problem,
                   const std::string &application);

    virtual ~SoftwareTicket();

    void print_ticket(std::ostream &out, const std::string &indentation) override;


};


#endif //HELPDESK_SOFTWARETICKET_H
