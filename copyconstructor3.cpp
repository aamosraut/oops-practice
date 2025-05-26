#include<iostream>


using namespace std;
/// the data type of object (say a) is always class (say Ninja)
/*  Types of Constructor:
    1. Default constructor 
    2. parameterized constructor
    3. copy constructor*/

class Ninja {
    int power;
    public:
    Ninja(){
        power=2; // default
        cout<<"Default constructor"<<endl;
    }

    Ninja (Ninja &o){
        power=o.power;

    }

    
    
    void display(){
        
        cout<<"Power="<<power<<endl;
    }
};


int main(){

    Ninja a;
    Ninja b(a);  ///It calls copy constructor
    b.display(); /// prints--> power=2

return 0;
}