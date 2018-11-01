//
// Created by Сергей on 14.10.17.
//

#ifndef ADAPTER_ADAPTERTOY_H
#define ADAPTER_ADAPTERTOY_H

#include "/Users/sergei/CLionProjects/Adapter/Duck/DUck.h"
#include "/Users/sergei/CLionProjects/Adapter/AdapterToy/Toy.h"

class AdapterToy : public Duck {
private:
    Toy* t;
public:
    AdapterToy(Toy* f){t = f;};
    void flying(){
        t->jumper();
    }

    void sound(){
        t->Musik();
    }

    ~AdapterToy(){
        delete t;
    }
};

#endif //ADAPTER_ADAPTERTOY_H
