cmake_minimum_required(VERSION 3.17)
project(helpdesk)

set(CMAKE_CXX_STANDARD 14)

add_executable(helpdesk main.cpp Employee.cpp Employee.h HelpdeskEmployee.cpp HelpdeskEmployee.h Ticket.cpp Ticket.h SoftwareTicket.cpp SoftwareTicket.h HardwareTicket.cpp HardwareTicket.h Helpdesk.cpp Helpdesk.h FileReader.cpp FileReader.h)
configure_file(input.txt input.txt COPYONLY)
