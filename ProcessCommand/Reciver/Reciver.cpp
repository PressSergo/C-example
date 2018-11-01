//
// Created by Сергей on 12.10.17.
//

#include "Reciver.h"

void Reciver::InsertCommand(CommandProc *com) {
    command.push_back(com);
    size++;
}

void Reciver::Run() {
    for (int i = 0; i < size; ++i) {
        command[i]->execute();
    }
}