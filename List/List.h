//
// Created by Сергей on 22.10.17.
//

#ifndef LIST_LIST_H
#define LIST_LIST_H

#include <iostream>

class Link{
public:
    Link* next;
    int data;

    Link(int d){
        data  = d;
    }

    ~Link(){
        std::cout<<"Delete"<<" ";
        delete next;
    }

    void display(){
        std::cout<<data<<" ";
    }
};

class LinkList{
private:
    Link* first;
    Link* last;

    void deleted(){
        if(first != NULL) {
            first = first->next;
            deleted();

        }
        delete first;
    }

public:
    LinkList(){
        first = NULL;
        last = NULL;
    }

    ~LinkList(){
        deleted();
    }

    void insertFirst(int j){
        Link* in = new Link(j);
        in->next = first;
        if(first == NULL) last = in;
        first = in;
    }

    void removeFirst(){
        first=first->next;
    }

    void display(){
        Link* disp = first;
        while(disp != NULL){
            disp->display();
            disp=disp->next;
        }
        std::cout<<std::endl;
    }

    void DispI(){
        displayInversiv(first);
    }

    void displayInversiv(Link* l){
        if(l->next != NULL){
            l = l->next;
            displayInversiv(l);
        }
        l->display();
    }

    Link* SearchLink(int key){
        Link* search = first;
        while(search->data != key)
        {
            if(search->next == NULL ){
                return search;
            }else
            search = search->next;
        }
        return search;
    }

    void Delete(int j){
        Link* previos = first;
        Link* perf = first;

        while(perf->data != j){
            if(perf->next == NULL){

            }else {
                previos = perf;
                perf = perf->next;
            }
        }

        if(perf == first ){
            first = first->next;
        }else{
            previos->next = perf->next;
        }
    }

    void insertLast(int k){
        Link* la = new Link(k);
        if(first == NULL) first = la;
        else {
            last->next = la;
        }
        last = la;
    }

};

#endif //LIST_LIST_H
