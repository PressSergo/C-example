#include <iostream>

struct Node {
    Node* left;
    Node* right;
    Node* parent;
    int key;

    Node(int k = 10){
        key = k;
        left = NULL;
        right = NULL;
        parent = NULL;
    }

    void display(){
        std::cout<<key;
    }
};

class rbTree{
public:
    static Node NIL;
};

int main() {
    rbTree j;
    rbTree k;
    std::cout<<j.NIL.key;
    std::cout<<k.NIL.key;
    return 0;
}