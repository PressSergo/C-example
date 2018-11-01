//
// Created by Сергей on 27.09.17.
//

#include <ctime>
#include <iostream>
#include "Array.h"

Array::Array() {};

Array::Array(int size) {
    count = size;
    arr = new int[size];

    srand(time(0));
    for (int i = 0; i < size; ++i) {
        arr[i] = 0+rand()%100;
    }
}

Array::~Array() {
    delete [] arr;
}

std::ostream& operator<<(std::ostream& os ,const Array& t){
    for (int i = 0; i < t.count; ++i) {
        os<<t.arr[i]<<" ";
    }
    os<<std::endl;
}

void Array::Merge(int start, int end) {
    if(start>end) return;
    int middle = (start+end)/2;
    if((end-start) <= DEF) {
        InsertSorted(start, end);
        return;
    }else {
        Merge(start, middle);
        Merge(middle+1, end);
    }
    MergeSorted(start,middle,end);
}

void Array::InsertSorted(int down, int upper) {
//    std::cout<<"start="<<down<<" end="<<upper<<std::endl;
    int start = down;
    int end = upper;
    int size = (upper-down)/2;

    for (int i = start+1; i <=end ; ++i) {
        int temp = arr[i];
        int j = i-1;
        while(arr[j]<temp && j>=start){
            arr[j+1]=arr[j];
            arr[j]=temp;
            j--;
        }
    }
}

void Array::MergeSorted(int down, int Middle, int upper) {
//    std::cout<<down<<" "<<Middle<<" "<<upper<<std::endl;
//    display();
    int LeftSize = (Middle-down)+1;
    int RightSize = (upper-Middle);
    int LeftIndex = 0;
    int RightIndex = 0;
    int Left[LeftSize];
    int Right[RightSize];

    while(LeftIndex<LeftSize){
        Left[LeftIndex] = arr[down+LeftIndex];
        LeftIndex++;
    }

    while(RightIndex<RightSize){
        Right[RightIndex]=arr[Middle+RightIndex+1];
        RightIndex++;
    }

    RightIndex = 0;
    LeftIndex = 0;
    int current = down;

    while(LeftIndex<LeftSize && RightIndex<RightSize){
        if(Right[RightIndex]<Left[LeftIndex]){
            arr[current] = Left[LeftIndex];
            LeftIndex++;
        }else{
            arr[current] = Right[RightIndex];
            RightIndex++;
        }
        current++;
    }

    while(LeftIndex<LeftSize){
        arr[current]=Left[LeftIndex];
        current++;
        LeftIndex++;
    }

    while(RightIndex<RightSize){
        arr[current]=Right[RightIndex];
        current++;
        RightIndex++;
    }
}


void Array::display() {
    for (int i = 0; i < count; ++i) {
        std::cout<<arr[i]<<" ";
    }
    std::cout<<std::endl;
}
