//
// Created by Сергей on 12.10.17.
//

#ifndef PROCESSCOMMAND_RECIVER_H
#define PROCESSCOMMAND_RECIVER_H

#include <vector>
#include "/Users/sergei/CLionProjects/ProcessCommand/CommandProcess/CommandProc.h"

class Reciver {
private:
    std::vector<CommandProc*> command;
    int size = 0;
public:
    void InsertCommand(CommandProc*);
    void Run();
};


#endif //PROCESSCOMMAND_RECIVER_H
