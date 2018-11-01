//
// Created by Сергей on 12.10.17.
//

#ifndef COMMNAD_COMAND_H
#define COMMNAD_COMAND_H

#include "/Users/sergei/CLionProjects/Commnad/Process/process.h"

class Command{
public:
    virtual void execute() = 0; // выполнить
};

class WaitProcess : public Command {
private:
    Process* proc;
public:
    WaitProcess(Process* p){
        proc=p;
    }

    void execute() override {
        proc->WaitProcess();
    }

    ~WaitProcess(){
        delete proc;
    }
};

class KillProcess : public Command {
private:
    Process* proc;
public:
    KillProcess(Process* p){
        proc = p;
    }

    void execute() override {
        proc->KillProcesss();
    }

    ~KillProcess(){
        delete proc;
    }
};

#endif //COMMNAD_COMAND_H
