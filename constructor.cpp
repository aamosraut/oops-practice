#include<iostream>

using namespace std;

class student{

    public:
    student()
    {
        cout<<"constructor called."<<endl;

    }
};

int main (){
    student s, u, t; // it calls constructor

    return 0;
}