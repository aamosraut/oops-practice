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
    Person p1,p2; // p is object
    p1.getdata(); // calls member function getdata()..
    p1.display();
    p2.getdata();
    p2.display();
    return 0;
}
