#include<iostream>


using namespace std;


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

    Ninja a;
    Ninja b(5);
    Ninja c(a);/// it calls default copy constructor..
    c.display();

return 0;

}