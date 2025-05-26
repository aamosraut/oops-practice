// WAP in C++ to add two numbers using DMA..
#include<iostream>
using namespace std;
int main(){
    int *p;
    int *q, *sum;
    p= new int;
    q= new int;
    *p=5;
    *q=10;
    *sum=*p+*q;
    cout<<"sum:"<<*sum<<endl;
return 0;

}
