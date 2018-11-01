//
// Created by Сергей on 12.10.17.
//

#ifndef PROCESSCOMMAND_COMMANDPROC_H
#define PROCESSCOMMAND_COMMANDPROC_H

#include "/Users/sergei/CLionProjects/ProcessCommand/Process/Process.h"


class CommandProc {
public:
    virtual void execute() = 0;
};

class SetWaiting : public CommandProc {
private:
    Process* proc;
public:
    SetWaiting(Process*);
    ~SetWaiting();

    void execute() override;
};

class SetExecution : public CommandProc {
private:
    Process* proc;
public:
    SetExecution(Process*);
    ~SetExecution();

    void execute() override;
};

class SetClose : public CommandProc {
private:
    Process* proc;
public:
    SetClose(Process*);
    ~SetClose();

    void execute() override;
};

#endif //PROCESSCOMMAND_COMMANDPROC_H
