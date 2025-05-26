#include<iostream>
using namespace std;
int a=5;
// Return by reference 
int &fun(){
    return a;
}
int main(){
    cout<<a<<endl;
    fun()=2;
    cout<<a<<endl;
    return 0;
/* or print 
count<<fun();   that gives 2..*/

}