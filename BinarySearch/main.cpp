#include <iostream>
#include "Array.h"
#define ARRAYSIZE 20

using namespace std;

int main(){
    Array ar = Array(ARRAYSIZE);
    int search;
/*
    std::cout<<ar;

    int search;
    cout<<"Enter value:";
    cin>>search;
    cout<<ar.BinarryBetween(search);
    ar.InsertSortedBinary();
    cout<<ar;*/

    std::cout<<ar;
    std::cin>>search;
    ar.InsertSerge(search);
    ar.Merge(0,ARRAYSIZE-1);

    return 0;
}