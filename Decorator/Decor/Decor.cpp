//
// Created by Сергей on 08.10.17.
//

#include "Decor.h"

double Milk::cost() {
    return l->cost()+54;
}

double Cocao::cost() {
    return l->cost()+100;
}
