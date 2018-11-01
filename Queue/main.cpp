#include <iostream>
#include "Queue.h"
#define ArraySize 10

int main() {
    Queue q(ArraySize);

    srand(time(0));

    for (int i = 0; i < ArraySize; ++i) {
        q.insert((1+rand()%100));
    }

    q.Display();

    for (int i = 0; i < ArraySize; ++i) {
        q.insert((1+rand()%100));
    }

    q.Display();

    return 0;
}