//
// Created by jihee on 1/22/2021.
//

#include <fstream>
#include "FileReader.h"

void read_normal_employee(Helpdesk &helpdesk, const std::string &filename) {
    std::ifstream input{filename};

    if(!input.is_open()){
        throw std::runtime_error("Failed to open file");
    }

    for(;;) {
        std::string name, password, department;

        input >> name;
        if(name.size() ==0 || input.eof()){
            return;
        }

        input >> password;
        if(password.size() ==0 || input.eof()){
            return;
        }

        input >> department;
        if(department.size() ==0 || input.eof()){
            return;
        }

        helpdesk.add_employee(name, password, department);

    }
}
