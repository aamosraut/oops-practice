#include<iostream>

using namespace std;

class Ninja {
    public:

    Ninja (){
        cout<<"I am constructor . I love peace"<<endl;
    }

    ~Ninja(){
        cout<<"I am Destructor . I want to break up"<<endl;
    }
};


int main(){
    Ninja a;
    return 0;
}