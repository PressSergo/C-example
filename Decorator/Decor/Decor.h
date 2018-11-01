//
// Created by Сергей on 08.10.17.
//

#ifndef DECORATOR_DECOR_H
#define DECORATOR_DECOR_H

#include "/Users/sergei/CLionProjects/Decorator/Linker/Linker.h"

class Decor : public Linker {
public:
    virtual double cost() = 0 ;
};

class Milk : public Decor {
public:
    Linker* l;
    Milk(Linker* u){l=u;}
    double cost() override;
    std::string GetDescription(){ return l->GetDescription()+" with Milk";}
};

class Cocao : public Decor {
public:
    Linker* l;
    Cocao(Linker* u){l=u;}
    double cost() override;
    std::string GetDescription(){ return l->GetDescription()+" with Cocao";}
};

#endif //DECORATOR_DECOR_H
