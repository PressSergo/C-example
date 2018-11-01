#include <iostream>
#include "Reciver/Reciver.h"

int main() {
    Process file("OutputFile");
    Reciver ActionProc;

    ActionProc.InsertCommand(new SetExecution(&file));
    ActionProc.InsertCommand(new SetWaiting(&file));
    ActionProc.InsertCommand(new SetClose(&file));

    ActionProc.Run();
    return 0;
}