//
// Created by Сергей on 22.10.17.
//

#ifndef STACK_STACK_H
#define STACK_STACK_H

class Stack {
private:
    int MacSize;
    int* Array;
    int top;
public:
    Stack(int i) {
        MacSize = i;
        Array = new int[MacSize];
        top = -1;
    }

    ~Stack(){delete Array;}

    void push(int posh) {Array[++top] = posh;}

    int pop(){ return Array[top--];}

    int peek(){return Array[top];}

    bool isEmpty(){return (top == -1);}

    bool isFull(){return (top == MacSize-1);}
};

#endif //STACK_STACK_H
