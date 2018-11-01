//
// Created by Сергей on 14.10.17.
//

#ifndef ADAPTER_DUCK_H
#define ADAPTER_DUCK_H

#include "/Users/sergei/CLionProjects/Adapter/BehaviorDuck/RBehavior.h"

class Duck {
protected:
    FlyBehavior* fly;
    SoundBehavior* sou;
public:
    virtual void sound(){
        sou->sound();
    }

    virtual void flying(){
        fly->fly();
    }

    virtual ~Duck(){
        delete fly;
        delete sou;
    }
};

#endif //ADAPTER_DUCK_H
