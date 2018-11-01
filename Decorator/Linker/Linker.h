//
// Created by Сергей on 08.10.17.
//

#ifndef DECORATOR_LINKER_H
#define DECORATOR_LINKER_H


#include <string>

class Linker {
public:
    std::string as = "";

    virtual std::string GetDescription(){return as;}
    virtual double cost() =0;
};

class Espresso : public Linker {
public:
    Espresso();
    double cost() override;
};


#endif //DECORATOR_LINKER_H
