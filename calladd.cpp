#include<iostream>
using namespace std;
// pass by adderess not pass by reference
void fun(int *a){
    
    *a=10;
}
int main(){
    int a=5;
    fun(&a);
    cout<<a<<endl;
    return 0;
}