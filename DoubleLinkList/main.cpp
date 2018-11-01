#include <iostream>
#include "Dou leLInkList.h"
#define ArraySize 20

int main() {
    DoubleLink te;


    srand(time(0));
    for (int i = 0; i < ArraySize; ++i) {
        te.InsertFirst(1+rand()%100);
    }

    te.Display();
    te.DisplayInvers();
    te.deleteFirst();
    te.deleteFirst();
    te.deleteFirst();
    te.Display();
    return 0;
}