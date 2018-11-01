//
// Created by Сергей on 27.10.17.
//

#ifndef TREE_TTREE_H
#define TREE_TTREE_H

#include <iostream>

class Node {
public:
    Node* leftChildren = NULL;
    Node* RightChildren = NULL;
    int Data;

    Node(int i){
        Data = i;
    }

    void display(){
        std::cout<<"Data: "<<Data<<std::endl;
    }
};

class Tree {
private:
    Node* root = NULL;

    void SymmetricBypass(Node* sym){
        if(sym != NULL){
            SymmetricBypass(sym->leftChildren);
            sym->display();
            SymmetricBypass(sym->RightChildren);

        }
    }

    void ReurnedByPass(Node* sym){
        if(sym!=NULL){
            sym->display();
            ReurnedByPass(sym->leftChildren);
            ReurnedByPass(sym->RightChildren);
        }
    }

    void InverseBypass(Node* root){
        if(root != NULL){
            InverseBypass(root->leftChildren);
            InverseBypass(root->RightChildren);
            root->display();
        }
    }

    Node* GetSuccess(Node* te){
        Node* current = te->RightChildren;
        Node* succesor = te;
        Node* succesorParent = te;

        while(current != NULL){
            succesorParent = succesor;
            succesor = current;
            current = current->leftChildren;
        }

        if(succesor != te->RightChildren){
            succesorParent->leftChildren = succesor->RightChildren;
            succesor->RightChildren = te->RightChildren;
        }

        return succesor;
    }

public:
    void insert(int i){
        Node* ins = new Node(i);
        if(root == NULL) root = ins;
        else {
            Node* current = root;
            Node* parent;
            while(true){
                parent = current;
                if(current->Data > ins->Data){
                    current = current->leftChildren;
                    if(current == NULL) {
                        parent->leftChildren = ins;
                        return;
                    }
                }else {
                    current = current->RightChildren;
                    if(current == NULL){
                        parent->RightChildren = ins;
                        return;
                    }
                }
            }
        }
    }

    void SymmetricDisplay(int type){
        switch(type){
            case 1:
                SymmetricBypass(root);
                break;
            case 2:
                ReurnedByPass(root);
                break;
            case 3:
                InverseBypass(root);
                return;
        }
    }

    void find(int key){
        Node* current = root;
        while(true){
            if(current->Data == key){
                std::cout<<"Find ";
                current->display();
                return;
            }
            if(current->Data > key)
                current = current->RightChildren;
            else
                current = current->RightChildren;
            if(current == NULL){
                std::cout<<"Error find"<<std::endl;
                return;
            }
        }
    }

    void FindMax(){
        Node* current = root;
        while(current->RightChildren!=NULL) current = current->RightChildren;
        std::cout<<"MaxElement: ";
        current->display();
    }

    void FindMin(){
        Node* current = root;
        while(current->leftChildren != NULL) current=current->leftChildren;
        std::cout<<"MinElement: ";
        current->display();
    }

    bool deleted(int key){
        Node* current = root;
        Node* parent;
        bool isLeft;
        while(current->Data != key){
            parent = current;
            if(current->Data < key){
                isLeft = false;
                current = current->RightChildren;
            }else {
                isLeft = true;
                current = current->leftChildren;
            }
            if(current == NULL)
                return false;
        }

        if(current->leftChildren == NULL && current->RightChildren == NULL){
            if(current == root)
                root = NULL;
            else if(isLeft)
                parent->leftChildren = NULL;
            else
                parent->RightChildren = NULL;
        }else if(current->RightChildren == NULL){
            if(current == root)
                root = current->leftChildren;
            if(isLeft)
                parent->leftChildren = current->leftChildren;
            else
                parent->RightChildren= current->RightChildren;
        }else if(current->leftChildren == NULL){
            if(current == root){
                root = current->RightChildren;
            }else if(isLeft)
                parent->leftChildren = parent->RightChildren;
            else
                parent->RightChildren = parent->RightChildren;
        } else {
            Node* succesor = GetSuccess(current);
            if(current == root)
                root = succesor;
            else if(isLeft)
                parent->leftChildren = succesor;
            else
                parent->RightChildren = succesor;
            succesor->leftChildren = current->leftChildren;
        }
        return true;
    }
};

#endif //TREE_TTREE_H
