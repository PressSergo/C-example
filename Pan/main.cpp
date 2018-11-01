#include <iostream>

#define DIM 2

int main(){
    unsigned short int dim2; // количество строк
    int** twoArr; // динамический двумерный массив
    int *oneArr; // одномерный динамический массив

    std::cout<<"Enter number lines: ";
    std::cin>>dim2;

    twoArr = new int* [dim2];
    for (int i = 0; i < dim2; ++i) {
        twoArr[i] = new int[DIM];
    }

    srand(time(0)); // обновление рандома
    for (int j = 0; j < dim2; ++j) {
        twoArr[j][0] = 0+rand()%100;
        twoArr[j][1] = 0+rand()%100;
    }

    // отображаем массив
    for (int k = 0; k < dim2; ++k) {
        std::cout<<"twoArr["<<k<<"][0]="<<twoArr[k][0]<<"   "<<"twoArr["<<k<<"][1]="<<twoArr[k][1]<<std::endl;
    }

    oneArr = new int[dim2]; // создаем одномерный массив и заполняем его
    for (int l = 0; l < dim2; ++l) {
        oneArr[l] = (twoArr[l][0] > twoArr[l][1]) ? (twoArr[l][0] - twoArr[l][1]) : (twoArr[l][1] - twoArr[l][0]);
    }

    std::cout<<std::endl;
    std::cout<<"Converted array"<<std::endl;
    for (int m = 0; m < dim2; ++m) {
        std::cout<<"oneArr["<<m<<"]="<<oneArr[m]<<std::endl;
    }

    return 0;
}