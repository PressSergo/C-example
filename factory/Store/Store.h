//
// Created by Сергей on 10.10.17.
//

#ifndef FACTORY_STORE_H
#define FACTORY_STORE_H

#include <string>
#include <iostream>
#include "/Users/sergei/CLionProjects/factory/Aircraft/Aircraft.h"

class Store {
private:
    Aircraft* f;
protected:
    virtual Aircraft* createAir(std::string) = 0;
public:
    void OrderAir(std::string type){
        f = createAir(type);
        std::cout<<"Volume:"<<f->getVolum()<<" Cost:"<<f->getCost()<<std::endl;
    }

    virtual ~Store() {
        delete f;
    }
};

class RussiaStore : public Store {
public:
    Aircraft *createAir(std::string string) override {
        return new AircraftRussia();
    }
};

class ChineStore : public Store {
public:
    Aircraft *createAir(std::string type) override {
        if(type == "WW") {
            return new AircraftChinaWW();
        }else if(type == "BA"){
            return new AircraftChina();
        }
    }
};

#endif //FACTORY_STORE_H
