#include <iostream>
#include "Array.h"
#define SIZEARRAY 40

int main(){
    Array ar = Array(SIZEARRAY); // Логично что аргумент должен быть lvalue
    std::cout<<ar;
    //ar.InsertSort();
    //ar.Bublesort();
    //ar.BubleSortTwo();
    //ar.SelectSorted();
    /*
    ar.merge(0,SIZEARRAY-1);
    std::cout<<ar;
    std::cout<<"Enter element:";
    int s;
    std::cin>>s;
    std::cout<<"Index element: "<<ar.BinrySearch(s);
     */
    ar.InsertBinarySorted();
    std::cout<<ar;
    return 0;
}