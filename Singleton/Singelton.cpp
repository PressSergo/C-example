//
// Created by Сергей on 12.10.17.
//

#include <ctime>
#include <iostream>
#include "Singelton.h"

Singelton* Singelton::object = NULL;


Singelton::Singelton(int s) {
    count = s;
};
Singelton* Singelton::GetInstance(int s) {
    if(object == NULL){
        object= new Singelton(s);
        return object;
    }else
        return object;
}

void Singelton::Display() {
    std::cout<<"Object with type: "<<count<<std::endl;
}