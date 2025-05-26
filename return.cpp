#include<iostream>
using  namespace std;
// Return by  reference
int a=5;
int &fun(){
    return a;
}
 int main(){
    int a;
    a=fun();
    cout<<a;
    return 0;
 }
