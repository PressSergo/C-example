#include <iostream>
#include "Duck/ConcreteDuck.h"
#include "AdapterToy/AdapterToy.h"

int main() {
    Duck* f = new BigDuck();
    f->sound();
    f->flying();
    delete f;
    f = new AdapterToy(new Toy());
    f->flying();
    f->sound();
    return 0;
}