//
// Created by Сергей on 12.10.17.
//

#ifndef COMMNAD_PROCESS_H
#define COMMNAD_PROCESS_H

#include <iostream>

class Process {
private:
    enum {Wait=20 , Kill = 734};
public:
    Process(){}
    ~Process(){};

    void WaitProcess(){
        std::cout<<"Waiting process: "<<Wait<<std::endl;
    }

    void KillProcesss(){
        std::cout<<"Kill process: "<<Kill<<std::endl;
    }
};

#endif //COMMNAD_PROCESS_H
