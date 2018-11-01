//
// Created by Сергей on 12.10.17.
//

#ifndef COMMNAD_RECIVER_H
#define COMMNAD_RECIVER_H

#include "../Command/Comand.h"

class Reciver {
private:
    Command* com;
public:
    Reciver(){};
    ~Reciver(){delete com;};
    void SetCommand(Command* c) {com = c;};
    void Run(){com->execute();}
};

#endif //COMMNAD_RECIVER_H
