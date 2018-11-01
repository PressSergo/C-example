#include <iostream>
#include "PreorityQueue.h"

#define ArraySize 10

int main() {
    PreorityQueue a(ArraySize);

    srand(time(0));
    for (int i = 0; i < ArraySize; ++i) {
        a.insert((1+rand()%100));
    }

    a.Display();

    a.remove();
    a.remove();
    a.Display();

    for (int i = 0; i < ArraySize; ++i) {
        a.insert((1+rand()%100));
    }

    a.Display();

    return 0;
}