/* Write a program that creates a class teacher with data members , tid and subject and member function for reading and 
displaying data members. Both the members function should be defined outside the class.
Create two objects of the class teacher and use them to display the information.*/

#include<iostream>
using namespace std;

class Teacher{
    int tid;
    string subject;

    public:
    void gets();
    void display ();
};
void Teacher:: gets (){
cout<<"Enter teacher id"<<endl;
cin>>tid;
cout<<"Enter name of subject"<<endl;
cin>>subject;
}

void Teacher:: display(){
    cout<<"Teacher's id:"<<tid<<endl;
    cout<<"subject:"<<subject<<endl;
}

int main(){
    Teacher a, b;
    a.gets();
    b.gets();

    a.display();
    b.display();

    return 0;
}