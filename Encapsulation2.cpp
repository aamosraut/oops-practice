#include<iostream>

using namespace std;

class Person {
    string name;  //data member
    int id; // data member
public:
    void getdata (){
        cout<<"Enter your name and id:";
        cin>>name>>id;
    }

    void display(){
        cout<<"name="<<name<<endl;
        cout<<"id="<<id<<endl;
    }
};

int main(){
    Person p; // p is object
    p.getdata(); // calls member function getdata()..
    p.display();
    return 0;
}
