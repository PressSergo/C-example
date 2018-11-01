//
// Created by Сергей on 20.09.17.
//

#ifndef BINARYSEARCH_ARRAY_H
#define BINARYSEARCH_ARRAY_H

#include <iostream>

class Array {
private:
    int *arr;
    int count;
    int search;
public:
    explicit Array();
    Array(int);
    ~Array();
    int BinaryTop(int);
    friend std::ostream& operator <<(std::ostream& , const Array&);
    int BinarryBetween(int, int , int);
    void InsertSortedBinary();

    void Merge(int,int);
    void MergeSumm(int,int,int);
    void InsertSerge(int ser){search = ser;}
};


#endif //BINARYSEARCH_ARRAY_H