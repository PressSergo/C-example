#include <iostream>
#include "Singelton.h"

int main() {
    Singelton* f = Singelton::GetInstance(564);
    f->Display();

    Singelton* s = Singelton::GetInstance(231);
    s->Display();
    return 0;
}