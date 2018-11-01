#include <iostream>
#include "Aircraft/Aircraft.h"
#include "Store/Store.h"

int main() {
    Store* s = new ChineStore();
    s->OrderAir("BA");
    s->OrderAir("WW");
    delete s;

    s=new RussiaStore();
    s->OrderAir("");
    delete s;
    return 0;
}