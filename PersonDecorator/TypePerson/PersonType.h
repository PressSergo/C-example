//
// Created by Сергей on 08.10.17.
//

#ifndef PERSONDECORATOR_PERSONTYPE_H
#define PERSONDECORATOR_PERSONTYPE_H

#include "/Users/sergei/CLionProjects/PersonDecorator/Linker/LInker.h"

class Decorator : public Linker {
};

class Upper : public Decorator {
public:
    Linker* ch;
    Upper(Linker* l){ch=l;}
    std::string GetDescrip(){return ch->GetDescrip()+".11";}
};

class Down : public Decorator {
public:
    Linker* ch;
    Down(Linker* l){ch=l;}
    std::string GetDescrip(){return ch->GetDescrip()+".00";}
};


class Middle : public Decorator {
public:
    Linker* ch;
    Middle(Linker* l){ch=l;}
    std::string GetDescrip(){return ch->GetDescrip()+".01";}
};


#endif //PERSONDECORATOR_PERSONTYPE_H
