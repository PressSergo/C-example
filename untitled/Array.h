//
// Created by Сергей on 04.09.17.
//

#ifndef UNTITLED_ARRAY_H
#define UNTITLED_ARRAY_H


#include <iostream>

class Array {
protected:
    int *arr;
    int count;
    void init();
    void swap(int,int);
    void MergeSorted(int,int,int);

public:
    explicit Array();
    Array(int);
    friend std::ostream& operator << (std::ostream&,Array&);
    virtual ~Array();
    void InsertSort();
    void Bublesort();
    void BubleSortTwo();
    void SelectSorted();
    void merge(int,int);
    int BinrySearch(const int&);
    void InsertBinarySorted();
    int SpecialBinarySorted(int , int , int);
};


#endif //UNTITLED_ARRAY_H
