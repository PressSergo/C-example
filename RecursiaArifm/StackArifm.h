//
// Created by Сергей on 19.10.17.
//

#ifndef RECURSIAARIFM_STACKARIFM_H
#define RECURSIAARIFM_STACKARIFM_H

#include <string>
#include <iostream>

class Stack {
private:
    int MaxSize;
    char* ArrayStack;
    int top;
public:
    Stack(int s){
        MaxSize = s;
        ArrayStack = new char[MaxSize];
        top = -1;
    }

    void push(char j){ArrayStack[top++] = j;}

    char pop(){ return ArrayStack[top--];}

    char peek(){return ArrayStack[top];}

    bool isEmpty(){return top == -1;}

    int size(){ return top+1;}

    char peekN(int n){ return ArrayStack[n];}

    void display(std::string s){
        std::cout<<s<<"Stack (bottom->top): ";
        for (int j = 0; j < size(); ++j) {
            std::cout<<peekN(j)<<" ";
        }

        std::cout<<std::endl;
    }

};

class IntoPose {
private:
    Stack* theStack;
    std::string input;
    std::string output=" ";
public:
    IntoPose(std::string in){
        input = in;
        theStack = new Stack(in.size());
    }

    std::string DoTrans(){
        for (int j = 0; j < input.size(); ++j) {
        }
    }
};

#endif //RECURSIAARIFM_STACKARIFM_H
