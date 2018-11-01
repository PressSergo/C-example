#include <iostream>
#include "Linker/LInker.h"
#include "TypePerson/PersonType.h"

int main() {
    Linker* f = new Driver();
    char ci;

    while(true){
        std::cout<<"$Sergey:";
        std::cin>>ci;
        switch(ci){
            case 'u': {
                f = new Upper(f);
                break;
            }
            case 'd': {
                f = new Down(f);
                break;
            }
            case 'm': {
                f = new Middle(f);
                break;
            }
            case 'q':
                goto lable;
            default: {
                std::cout << "Enter input data"<<std::endl;
                continue;
            }
        }
        std::cout<<f->GetDescrip()<<std::endl;
    }lable:
    return 0;
}