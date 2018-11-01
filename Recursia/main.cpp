#include <iostream>
#include <ctime>
#define SIZE 40

using namespace std;

int buff[SIZE];

void mergesort(int* a,int Begin,int End);

int main(){
    int arr[SIZE];
    srand(time(0));
    for (int i = 0; i < SIZE; ++i) {
        arr[i]=1+rand()%100;
    }

    for (int j = 0; j < SIZE; ++j) {
        cout<<arr[j]<<" ";
    }

    cout<<endl;

    mergesort(arr,0,SIZE-1);

    cout<<endl;

    for (int k = 0; k < SIZE; ++k) {
        cout<<arr[k]<<" ";
    }
}

void mergesort(int* a,int Begin,int End){
    if(Begin == End)
        return;
    int Middle = (Begin+End)/2;
    mergesort(a,Begin,Middle);
    mergesort(a,Middle+1,End);

    for(int i = Begin;i<=Middle;i++){
        cout<<"L"<<a[i]<<" ";
    }

    for(int i = Middle+1;i<=End;i++){
        cout<<"R"<<a[i]<<" ";
    }

    int LefHan=Begin;
    int RegHan = Middle+1;
    int Incr=0;
    int n = End-Begin+1;

    while(LefHan<=Middle && RegHan<=End){
        if(a[LefHan]<a[RegHan])
            buff[Incr++]=a[LefHan++];
        else
            buff[Incr++]=a[RegHan++];
    }

    while(LefHan<=Middle){
        buff[Incr++]=a[LefHan++];
    }

    while(RegHan<=End){
        buff[Incr++]=a[RegHan++];
    }

    for (int j = 0; j < n; ++j) {
        a[Begin+j]=buff[j];
    }

    cout<<endl<<Begin<<"  "<<Middle<<" "<<End<<endl;
}