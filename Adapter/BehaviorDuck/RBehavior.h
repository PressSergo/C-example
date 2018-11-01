//
// Created by Сергей on 14.10.17.
//

#ifndef ADAPTER_RBEHAVIOR_H
#define ADAPTER_RBEHAVIOR_H

#include "/Users/sergei/CLionProjects/Adapter/BehaviorDuck/Behavior.h"
#include "iostream"

using std::cout;
using std::endl;

class Flying : public FlyBehavior {
public:
    void fly() override {
        cout<<"Flying duck"<<endl;
    }
};

class NonFlying : public FlyBehavior {
public:
    void fly() override {
        cout<<"NonFlying duck"<<endl;
    }
};

class Sounding : public SoundBehavior {
public:
    void sound() override {
        cout<<"Sounding Duck"<<endl;
    }
};

class NonSounding : public SoundBehavior {
public:
    void sound() override {
        cout<<"NonSounding Duck"<<endl;
    }
};

#endif //ADAPTER_RBEHAVIOR_H
