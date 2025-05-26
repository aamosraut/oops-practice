#include<iostream>
using namespace std;
int main(){
    int *a ;
    
a= new int[5];
int *sum = 0; 
sum = new int;
cout<<"Enter 5 num";
for(int i=0;i<5;i++){
cin>>*(a+i);
}

for(int i=0;i<5;i++){
    *sum = *sum + *(a+i);

}
cout<<*sum;
return 0;

}
