#include<iostream>
using namespace std;
// pass by value..
void fun(int a){
    a=10;
}
int main(){
    int a=5;
    fun(a);
    cout<<a<<endl;// prints 
    return 0;
}

