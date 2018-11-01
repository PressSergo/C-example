//
// Created by Сергей on 12.10.17.
//

#include "CommandProc.h"
SetWaiting::SetWaiting(Process *p) {
    proc=p;
}

SetExecution::SetExecution(Process *p) {
    proc=p;
}

SetClose::SetClose(Process *p) {
    proc=p;
}

SetWaiting::~SetWaiting() {
    delete proc;
}

SetExecution::~SetExecution() {
    delete proc;
}

SetClose::~SetClose() {
    delete proc;
}

void SetWaiting::execute() {
    proc->ProcWaiting();
}

void SetExecution::execute() {
    proc->ProcExecution();
}

void SetClose::execute() {
    proc->ProcClose();
}
