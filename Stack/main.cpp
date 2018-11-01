#include <iostream>
#include"Stack.h"

#define SizeArray 10

int main() {
    Stack st(SizeArray);
    srand(time(0));

    for (int i = 0; i < SizeArray; ++i) {
        st.push((1+rand()%100));
    }

    for (int j = 0; j < SizeArray; ++j) {
        std::cout<<st.pop()<<" ";
    }

    return 0;
}