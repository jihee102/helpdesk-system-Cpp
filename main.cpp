#include <iostream>
#include "Helpdesk.h"
#include "FileReader.h"

int main() {
    Helpdesk helpdesk;

    try {
      read_normal_employee(helpdesk, "input.txt");

      helpdesk.add_helpdesk_employee("gerralt", "catsaarecool", "Mice");

      helpdesk.print_all_employees(std::cout);
      std::cout << std::endl;

      helpdesk.add_software_ticket("15-01-2018","ruud", "Excel can't calculate the number of days in a year","Office 365" );
      helpdesk.add_hardware_ticket("16-01-2018","jeroen", "My mouse doesn't work!", 5 );
      helpdesk.add_software_ticket("17-01-2018","ruud", "MacOS won't boot on my system","MacOS X" );


      helpdesk.solve_ticket(2,"gerralt","Try putting it into the USB port instead of the HDMI port.");
      helpdesk.solve_ticket(3,"gerralt","Please replace your Dell laptop with a real system");

      helpdesk.print_all_tickets(std::cout);


    } catch (std::runtime_error & e  ) {
        std::cerr <<e.what() <<std::endl;
    }


    return 0;
}
