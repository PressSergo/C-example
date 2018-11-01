//
// Created by Сергей on 06.10.17.
//

#include <iostream>
#include "Observe.h"

void Peopele::update(int i) {
    ID = i;
    std::cout<<"People: "<<ID<<std::endl;
}

void Magazine::addElement(Subject &subject) {
    arr[size] = &subject;
    size++;
}

void Magazine::notifyPeople(int ch) {
    for (int i = 0; i < size; ++i) {
        arr[i]->update(ch);
    }
}

Magazine::Magazine() {
    arr.reserve(10);
    size = 0;
}

Magazine::~Magazine() {}