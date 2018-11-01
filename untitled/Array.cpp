//
// Created by Сергей on 04.09.17.
//

#include "Array.h"

Array::Array() {};

Array::Array(int s) {
    arr = new int[s];
    count = s;
    init();
}

void Array::init() {
    srand(time(0));
    for(int i = 0 ; i < count ; ++i){
        arr[i] = 1+rand()%100;
    }
}

std::ostream& operator <<(std::ostream& ty,Array& a) {
    for(int i = 0 ; i < a.count ; ++i){
        ty<<a.arr[i]<<" ";
    }
    ty<<std::endl;
    return ty;
}

Array::~Array() {
    delete [] arr;
}

void Array::InsertSort() {
    for(int j = 1 ; j < count ; ++j){
        int key = arr[j];
        int i = j-1;
        while(i>=0 && arr[i]>key){
            arr[i+1] = arr[i];
            --i;
        }
        arr[i+1] = key;
    }
}

void Array::Bublesort() {
    bool swaped;
    do{
        swaped=false;
        for(int i = count-1 ; i>0 ; --i){
            if(arr[i]>arr[i-1]){
                swap(i,i-1);
                swaped = true;
            }
        }
    }while(swaped);
}

void Array::BubleSortTwo() {
    int out,in;
    for(out = count-1 ; out>0 ; out--){
        for(int in = 0 ; in < out ; in++){
            if(arr[in]<arr[in+1]){
                swap(in,in+1);
            }
        }
    }
}

void Array::swap(int f, int s) {
    int temp = arr[f];
    arr[f]=arr[s];
    arr[s]=temp;
}

void Array::SelectSorted() {
    int Index,out,in;
    for(out = 0 ; out<count;out++){
        Index=out;
        for(in=out+1;in<count;in++){
            if(arr[Index]>arr[in]){
                Index = in;
            }
        }
        swap(out,Index);
    }
}

void Array::merge(int start, int end) {
    if (start < end) {
        int middle = (start+end)/2;
        merge(start, middle);
        merge(middle+1, end);
        MergeSorted(start, middle , end);
    }
}

void Array::MergeSorted(int start, int middle, int end) {
    int SizeLeft = middle-start+1;//размер первого массива Left
    int SizeRight = end-middle;//размер второго массива Right
    int IndexLeft = 0; // индекс Left массива
    int IndexRight = 0;// индекс Right массива
    int Left[SizeLeft+1];// размер левого массива увел на единицу для max элемента
    int Right[SizeRight+1];// размер правого массива увел на единицу для max элемента

    while(IndexLeft<SizeLeft){
        Left[IndexLeft]=arr[start+IndexLeft];
        //std::cout<<"L"<<Left[IndexLeft]<<std::endl;
        IndexLeft++;
    }
    while(IndexRight<SizeRight){
        Right[IndexRight]= arr[middle+IndexRight+1];
        //std::cout<<"R"<<Right[IndexRight]<<std::endl;
        IndexRight++;
    }

    Left[SizeLeft]=101; // заглушки
    Right[SizeRight]= 101;// заглушки

    IndexLeft=0;
    IndexRight = 0;

    for (int k = start; k <= end; ++k) {
        if(Left[IndexLeft]<=Right[IndexRight]){
            arr[k]=Left[IndexLeft];
            IndexLeft++;
        }else{
            arr[k]=Right[IndexRight];
            IndexRight++;
        }
    }
}

int Array::BinrySearch(const int &s) {
    int start = 0;
    int end = count-1;
    int Curind = 0;
    while(true){
        Curind = (start+end)/2;
        if(arr[Curind] == s)
            return Curind;
        else if (start > end)
            return -1;
        else {
            if(arr[Curind]<s)
                start = Curind+1;
            else
                end = Curind-1;
        }
    }
}

void Array::InsertBinarySorted(){
    int Temp = 0;
    for (int i = 1; i < count-1; ++i) {
        Temp = arr[i];
        int index = SpecialBinarySorted(0,i,arr[i]);
        int j = i-1;
        while(j>=index){
            arr[j+1]= arr[j];
            j--;
        }
        arr[index]=Temp;
    }
}

int Array::SpecialBinarySorted(int s, int e, int search) {
    int start = s;
    int end = e;
    int cur = 0;
    while(true) {
        cur = (end + start) / 2;
        if (cur == 0)
            return 0;
            if ((arr[cur] <= search && search <= arr[cur + 1]))
                return cur;
            else if (start > end)
                return -1;
            else {
                if (arr[cur] < search)
                    start = cur + 1;
                else
                    end = cur - 1;
            }
    }
}