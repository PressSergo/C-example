#include <iostream>
#include"List.h"

#define ArraySize 10

int main() {
    LinkList list;

    srand(time(0));
    for (int i = 0; i < ArraySize; ++i) {
        list.insertFirst(1+rand()%100);
    }

    std::cout<<std::endl;
    list.display();
    for (int i = 0; i < ArraySize; ++i) {
        list.insertFirst(1+rand()%100);
    }
    list.removeFirst();
    list.display();

    for (int i = 0; i < ArraySize; ++i) {
        list.insertLast(1+rand()%100);
    }

    list.display();

    return 0;
}