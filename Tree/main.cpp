#include <iostream>
#include "tTree.h"

int main() {
    Tree f;

    f.insert(50);
    f.insert(40);
    f.insert(65);
    f.insert(45);

    f.find(65);
    f.find(90);

    f.SymmetricDisplay(1);
    std::cout<<"____________________________"<< std::endl;

    f.SymmetricDisplay(2);
    std::cout<<"____________________________"<< std::endl;

    f.SymmetricDisplay(3);
    std::cout<<"____________________________"<< std::endl;

    f.FindMax();
    f.FindMin();

    std::cout<<"Delete "<<f.deleted(245)<<std::endl;
    f.SymmetricDisplay(1);

    f.insert(43);
    f.insert(42);
    f.insert(46);
    f.insert(44);

    std::cout<<"____________________________"<< std::endl;
    f.SymmetricDisplay(1);

    f.deleted(43);

    std::cout<<"____________________________"<< std::endl;
    f.SymmetricDisplay(1);

    return 0;
}