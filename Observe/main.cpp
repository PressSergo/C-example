#include <iostream>
#include "Observe/Observe.h"

int main() {
    Magazine mag;

    Peopele f;
    Peopele s;
    Peopele t;

    mag.addElement(f);
    mag.addElement(s);
    mag.addElement(t);

    mag.notifyPeople(78);

    return 0;
}