//
// Created by Сергей on 27.09.17.
//

#ifndef INSTMERGESORTED_ARRAY_H
#define INSTMERGESORTED_ARRAY_H


#include <iosfwd>
#define DEF 7

class Array {
private:
    int* arr;
    int count;
public:
    explicit Array();
    Array(int);
    ~Array();
    friend std::ostream& operator<<(std::ostream& , const Array&);
    void display();

    void Merge(int,int);
    void InsertSorted(int,int);
    void MergeSorted(int,int,int);

};


#endif //INSTMERGESORTED_ARRAY_H
