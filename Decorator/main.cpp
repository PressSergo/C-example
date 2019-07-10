#include <iostream>
#include "/Users/sergei/CLionProjects/Decorator/Decor/Decor.h"
#include "/Users/sergei/CLionProjects/Decorator/Linker/Linker.h"
//Serega privet
int main() {
    Linker* f = new Espresso();
    std::cout<<f->GetDescription()<<" "<<f->cost()<<std::endl;
    f = new Milk(f);
    f = new Milk(f);
    f = new Cocao(f);
    std::cout<<f->GetDescription()<<" "<<f->cost()<<std::endl;
    return 0;
}
