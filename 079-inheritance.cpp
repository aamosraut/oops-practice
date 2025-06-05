/*
Create a class author with attributes name and qualification.
Also, create a class publication with pname. From these classes derive a class book having attributes title and price.
Each of the three classes should have getdata() method to get their data from user. 
The classes should have putdata() method to display the data. Create instance of the class book in main.


Parent Class - Author (string name, string qualification)
            - Publication (string pname)

Child Class - Book (string title, float price)

*/

#include <iostream>
using namespace std;

class Author{
    string name, qualification;
    public:
    void getdata(){
        cout << "Enter Author's name: ";
        getline(cin,name);
        // cin >> name;
        cout << "Enter Author's qualification : ";
        getline(cin,qualification);
        // cin >> qualification;
    }
    void putdata(){
        cout << "Name: " << name << endl;
        cout << "Your Qualification: " << qualification << endl;
    }
};


class Publiction{
    string pname;
    public:
    void getdata(){
        cout << "Enter your publication name: ";
        getline(cin,pname);

        // cin >> pname;
        
    }
    void putdata(){
        cout << "Publication Name: " <<pname << endl;
    }
};

class Book: public Author, public Publiction{
    string title;
    float price;
    public:
    void getdata(){
        Author::getdata();
        Publiction::getdata();
        cout << "Enter your Book's Title: ";
        // cin >> title;
        getline(cin,title);

        cout << "Enter your Book's Price: ";
        cin >> price;

    }
    void putdata(){
        Author::putdata();
        Publiction::putdata();
        cout << "Book's Title: " << title << endl;
        cout << "Book's Price: " << price << endl;

    }
};

int main(){
    Book b;
    cout <<"\nEnter Details:\n";
    b.getdata();

    cout <<"\nDetails:\n";
    b.putdata();

    return 0;
}