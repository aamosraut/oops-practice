#include<iostream>
using namespace std;
int main(){
    // reference variable
    int a=5;
    int &b=a;// b is a reference variable.

    cout<<a<<endl;// prints 5
    cout<<b<<endl;// prints 5

    a=10;
   cout<<a<<endl;// prints 10
    cout<<b<<endl;// prints 10
     b=2;
        cout<<a<<endl;// prints 2
    cout<<b<<endl;// prints 2
    return 0;

}