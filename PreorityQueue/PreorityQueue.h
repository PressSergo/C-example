//
// Created by Сергей on 22.10.17.
//

#ifndef PREORITYQUEUE_PREORITYQUEUE_H
#define PREORITYQUEUE_PREORITYQUEUE_H

#include <iostream>

class PreorityQueue {
private:
    int MaxSize;
    int* Array;
    int rear;
    int front;
    int nItems;
public:
    PreorityQueue(int s){
        MaxSize = s;
        Array = new int[MaxSize];
        rear = 0;
        front = -1;
        nItems = 0;
    }

    ~PreorityQueue(){ delete Array;}

    void insert(int j){
        if(front == MaxSize-1)
            front = -1;
        int i = front;
        for (i; i >= rear; --i) {
            if(Array[i]>j){
                Array[i+1] = Array[i];
            }else
                break;
        }
        Array[i+1] = j;
        nItems++;
        front++;
    }

    int remove(){return Array[rear++];}

    void Display(){
        for (int i = rear; i <= front; ++i) {
            std::cout<<Array[i]<<" ";
        }
        std::cout<<std::endl;
    }
};

#endif //PREORITYQUEUE_PREORITYQUEUE_H
