//
// Created by Сергей on 08.10.17.
//

#ifndef PERSONDECORATOR_LINKER_H
#define PERSONDECORATOR_LINKER_H

#include "/Users/sergei/CLionProjects/PersonDecorator/TypePerson/Person.h"

class Linker {
public:
    Person character;
    virtual std::string GetDescrip() {return character.name+" :: "+character.indef;}
};

class Driver : public Linker {
public:
    Driver();
};


#endif //PERSONDECORATOR_LINKER_H
