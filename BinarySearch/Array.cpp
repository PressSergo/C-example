//
// Created by Сергей on 20.09.17.
//


#include "Array.h"
#include <ctime>

Array::Array() {};

Array::Array(int s) {
    arr = new int[s];
    count = s;
    srand(time(0));

    for (int j = 0; j < s; ++j) {
        arr[j] = 0+rand()%100;
    }

  /*  arr[0] = 99;
    arr[1] = 48;
    arr[2] = 31;
    arr[3] = 74;
    arr[4] = 27;
    arr[5] = 24;
    arr[6] = 74;
    arr[7] = 67;
    arr[8] = 55;
    arr[9] = 42;
    arr[10] = 55;*/
}

Array::~Array() {
    delete [] arr;
}

int Array::BinaryTop(int search) {
    int start = 0 ;
    int end = count;
    int middle = 0;

    while(true){
        middle = (start+end)/2;
        if(arr[middle] == search)
            return middle;
        else if (start > end)
            return -1;
        else {
            if(arr[middle]<search)
                start = middle+1;
            else
                end = middle-1;
        }
    }
}

std::ostream& operator << (std::ostream& s , const Array& a){
    for (int i = 0; i < a.count; ++i) {
        s<<a.arr[i]<<" ";
    }
    std::cout<<std::endl;
}

int Array::BinarryBetween(int upper,int down ,int search){
    int start = upper;
    int end = down;
    int middle = 0;
    while(true){
        middle = (start+end)/2;
/*        if(start >end)
            return -1;*/
        if(arr[middle] <= search && arr[middle+1] >= search){
            return middle;
        }
        if(middle == 0){
            return -1;
        }
        else {
            if(arr[middle]>search)
                end = middle;
            else
                start = middle+1;
        }
    }
}

void Array::InsertSortedBinary(){
    for (int i = 1; i < count; ++i) {
        int index = BinarryBetween(0,i,arr[i]);
        int Temp = arr[i];
        int j = i-1;

        while(j>index){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = Temp;
/*        for (int k = 0; k < count; ++k) {
            std::cout<<arr[k]<<" ";
        }
        std::cout<<std::endl;*/
    }
}

void Array::Merge(int start, int end) {
    if(start>=end) return;
    int middle = (start+end)/2;
    Merge(start,middle);
    Merge(middle+1,end);
    MergeSumm(start,end,middle);
}

void Array::MergeSumm(int down, int upper , int middle) {
//    std::cout<<"down="<<down<<" upper="<<upper<<" middle= "<<middle<<std::endl;
    int Sizeleft = middle;
    int SizeRight = upper-middle;
    int LeftIndex = down;

    while(LeftIndex<=middle){

        int RihtIndex = middle+1;
        while(RihtIndex<=upper){
            if(arr[LeftIndex]+arr[RihtIndex] == search)
                std::cout<<"arr["<<LeftIndex<<"]+arr["<<RihtIndex<<"]= "<<arr[LeftIndex]+arr[RihtIndex]<<std::endl;
            RihtIndex++;
        }
        LeftIndex++;
    }

}