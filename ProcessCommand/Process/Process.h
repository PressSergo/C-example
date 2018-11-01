//
// Created by Сергей on 12.10.17.
//

#ifndef PROCESSCOMMAND_PROCESS_H
#define PROCESSCOMMAND_PROCESS_H


#include <string>

class Process {
private:
    enum {Waiting = 101,Execution = 111,Close = 000};
    std::string name;
public:
    Process(std::string);
    ~Process();
    void ProcWaiting();
    void ProcExecution();
    void ProcClose();
};


#endif //PROCESSCOMMAND_PROCESS_H
