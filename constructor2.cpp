#include<iostream>

using namespace std;

class student{
int id;

    public:
    student()
    {
        id =5;

    }
    student (int i){
        id = i;
    }
};

int main (){
    student id; // it calls constructor

    return 0;
}