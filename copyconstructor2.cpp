#include<iostream>


using namespace std;
/// the data type of object (say a) is always class (say Ninja)


class Ninja {
    int power;
    public:
    Ninja(){
        power=2; // default
        cout<<"Default constructor"<<endl;
    }

    Ninja (Ninja &hatodi){
        cout<<"Ding ding ding ding..." <<endl;// Copy constructor

    }

    
    
    void display(){
        
        cout<<"Power="<<power<<endl;
    }
};


int main(){

    Ninja a;
    Ninja b(a);
    

return 0;

}