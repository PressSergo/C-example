#include <iostream>
#include "Array.h"
#define ARRAYSIZE 30

int main() {
    Array ar = Array(ARRAYSIZE);
    std::cout<<ar;
    ar.Merge(0,ARRAYSIZE-1);
    std::cout<<ar;
    return 0;
}