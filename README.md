# helpdesk-system-C++
A simple helpdesk ticket system / OOP with C++


## assignment description

> At a big company all employees can
request for help using a service desk.
Those requests (tickets) regard any
problems that employees can have with
their workplace and are either software
or hardware problems.
The system keeps track of all employees. An employee has a username and a password (saved in
plain text). There are regular employees (they can create tickets) and there are service desk
employees (they can resolve those tickets). For all employees, the system also saves at what
department the employee works. For service desk employees, the system also keeps track of the
expertise of the given service desk employee.
Everybody can create tickets in the system (this happens in this test by just adding code to the main
method). For the created ticket, the system creates a unique number. The date of the ticket and the
employee who created the ticket are also saved. Furthermore, the ticket has a description of the
problem. For a hardware problem, the code of the machine has to be saved (this is an integer). For a
software problem, the name of the software is saved.
Tickets can be solved by a service desk employee. When a service desk employee solves a ticket, the
service desk employee is saved in that ticket. Also a short description of the fix is saved.

> Please note: You don’t have to make a menu or other user interfaces for the system.


## Example outout

Output of the system looks like this:
```text
Employees:
 ruud (IT Lecturers)
 jeroen (IT Lecturers)
 hesther (Management)
 gerralt (Helpdesk, Expertise: Mice)
Tickets:
 Ticket 1 (Softwareticket, Application: Office 365):
 Status: Open
 ruud (IT Lecturers): Excel can't calculate the number of days in a year
 Ticket 2 (Hardwareticket, computerId: 5):
 Status: Solved
 jeroen (IT Lecturers): My mouse doesn't work!
 gerralt (Helpdesk, Expertise: Mice): Try putting it into the USB port instead of the HDMI port.
 Ticket 3 (Softwareticket, Application: MacOS X):
 Status: Solved
 ruud (IT Lecturers): MacOS won't boot on my system
 gerralt (Helpdesk, Expertise: Mice): Please replace your Dell laptop with a real system
```
---

## Contributor
Jihee Hong, <jihee102@gmail.com>

---
## License & copyright
© Jihee Hong

