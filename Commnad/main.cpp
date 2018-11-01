#include <iostream>
#include "Reciver/Reciver.h"

int main() {
    Process f;
    Command* fc = new KillProcess(&f);
    Reciver fr;
    fr.SetCommand(fc);
    fr.Run();

    delete fc;
    Process w;
    fc = new WaitProcess(&w);
    fr.SetCommand(fc);
    fr.Run();
    return 0;
}