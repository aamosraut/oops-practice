#include<iostream>
using namespace std;
//class
class Apple{
    public:
    int num;
    void fun(){
        cout<<"dance dance"<<endl;
    }
};
void play(){
    cout<<"PLay cricket"<<endl;

}
int main (){
    Apple a;
    a.num=5;
    cout<<"Data:"<<a.num<<endl;
    return 0;
}