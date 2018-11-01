//
// Created by Сергей on 12.10.17.
//

#include <iostream>
#include "Process.h"

Process::Process(std::string s) {
    name = s;
    std::cout<<"Process \""<<name<<"\""<<" creating"<<std::endl;
}

Process::~Process() {};

void Process::ProcClose() {
    std::cout<<"Process \""<<name<<"\""<<" closing"<<std::endl;
}

void Process::ProcExecution() {
    std::cout<<"Process \""<<name<<"\""<<" Execution"<<std::endl;
}

void Process::ProcWaiting() {
    std::cout<<"Process \""<<name<<"\""<<" waiting"<<std::endl;
}