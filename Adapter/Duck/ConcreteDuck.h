//
// Created by Сергей on 14.10.17.
//

#ifndef ADAPTER_CONCRETEDUCK_H
#define ADAPTER_CONCRETEDUCK_H

#include "/Users/sergei/CLionProjects/Adapter/Duck/DUck.h"

class RobbleDuck : public Duck {
public:
    RobbleDuck() {
        fly = new Flying();
        sou = new NonSounding();
    }
};

class BigDuck : public Duck {
public:
    BigDuck(){
        fly = new NonFlying();
        sou = new Sounding();
    }
};

#endif //ADAPTER_CONCRETEDUCK_H
