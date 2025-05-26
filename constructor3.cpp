#include<iostream>

using namespace std;
/*  Types of constructors
Default 
parameterized
copied 
*/

///   constructor overloading..
class Ninja {
    int power;
    public:
    Ninja(){
        power=10; // default
    }

    Ninja (int p){
        power=p; // parameterized

    }

    Ninja (int p,int q){
        power=p+q; // parameterized
    }
    void display(){
        
        cout<<"Power="<<power<<endl;
    }
};


int main(){
    Ninja n1;
Ninja n2(20);
Ninja n3(2,5);
n1.display();
n2.display();
n3.display();

return 0;

}