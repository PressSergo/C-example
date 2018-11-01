//
// Created by Сергей on 05.11.17.
//

#ifndef TREE234_TREE_H
#define TREE234_TREE_H

#include <iostream>
#include <cstdio>

class DataItem {
public:
    int data = 0;

    DataItem(int d){data = d;};

    DataItem(){};

    void display(){
        std::cout<<"/"<<data<<std::endl;
    }
};

class Node {
private:
    static const int ORDER = 4;//единая для всех переменная
    DataItem* DataArray; // колличесвто элементов равное трем
    Node* ChildArray;//четыре потомка
    int NumItem = 0;//колличесвто элементов
    Node* parent;//родительский узел
public:
    Node(){
        DataArray = new DataItem[ORDER-1];
        ChildArray = new Node[ORDER];
    }

    void connectionChild(int childNum,Node* child){
        ChildArray[childNum] = *child;
        if(child != nullptr){
            child->parent = this;
        }
    }

    Node* disconnectChild(int Child){
        Node* temp = (ChildArray+Child);
        ChildArray[Child] = NULL;
        return temp;
    }


};

#endif //TREE234_TREE_H


































