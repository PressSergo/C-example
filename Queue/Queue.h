//
// Created by Сергей on 22.10.17.
//

#ifndef QUEUE_QUEUE_H
#define QUEUE_QUEUE_H

class Queue {
private:
    int MaxSize;
    int* Array;
    int front;
    int rear;
    int nItems;
public:
    Queue(int i){
        MaxSize = i;
        Array = new int[MaxSize];
        front = 0;
        rear = -1;
        nItems = 0;
    }

    ~Queue(){delete Array;}

    void insert(int j){
        if(rear == MaxSize-1)
            rear = -1;
        Array[++rear] = j;
        nItems++;
    }

    int remove(){
        if(front == MaxSize)
            front = 0;
        nItems--;
        return Array[front++];
    }

    int peekFrom(){
        return Array[front];
    }

    int size(){
        return nItems;
    }

    bool isFull(){
        return (nItems == MaxSize);
    }

    void Display(){
        for (int i = 0; i < MaxSize; ++i) {
            std::cout<<Array[i]<<" ";
        }
        std::cout<<std::endl;
    }
};

#endif //QUEUE_QUEUE_H
