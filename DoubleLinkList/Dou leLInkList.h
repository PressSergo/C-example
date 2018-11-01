//
// Created by Сергей on 24.10.17.
//

#ifndef DOUBLELINKLIST_DOU_LELINKLIST_H
#define DOUBLELINKLIST_DOU_LELINKLIST_H

#include <ctime>
#include <iostream>

class Link {
public:
    Link* next;
    Link* prev;
    int Data;

    Link(int j){
        Data = j;
    }

    void display(){
        std::cout<<Data<< " ";
    }
};

class DoubleLink {
private:
    Link* first;
    Link* Last;
public:

    DoubleLink(){
        first = NULL;
        Last = NULL;
    }

    void InsertFirst(int j){
        Link* in = new Link(j);

        if(first == NULL){
            Last = in;
        }else {
            first->prev=in;
        }
        in->next = first; // если поместить это в else , то мы получали бы неизвесный адрес памяти так как при первои прохоже не получили бы NULL
        first = in;
    }

    void InsertLast(int j){
        Link* in = new Link(j);

        if(first == NULL){
            first = in;
        }else{
            Last->next = in;
            in->prev = Last;
        }
        Last = in;
    }

    void deleteFirst(){
        Link* temp = first;
        if(first->next == NULL){
            Last = NULL;
        }else{
            first->next->prev = NULL;
        }
        first = first->next;
        delete temp;
    }

    void deleteLast(){
        Link* l = Last;
        if(Last->prev == NULL){
            first = NULL;
        }else
            Last->prev->next = NULL;
        Last = Last->prev;
        delete l;
    }

    void Display(){
        Link* temp = first;
        while(temp!=NULL){
            temp->display();
            temp = temp->next;
        }
        std::cout<<std::endl;
    }

    void DisplayInvers(){
        Link* temp = Last;
        while(temp!=NULL){
            temp->display();
            temp = temp->prev;
        }
        std::cout<<std::endl;
    }

};

#endif //DOUBLELINKLIST_DOU_LELINKLIST_H
