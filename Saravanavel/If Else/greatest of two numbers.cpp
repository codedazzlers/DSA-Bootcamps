/* problem statement
Take two int values from user and print greatest among them */

#include<iostream>

using namespace std;

int main(){

int a,b;
cout<<"enter two numbers"<<endl;

cin>>a>>b;

if(a>b){
    cout<<"greatest value  is "<<a<<endl;
}
else
    cout<<"greatest value is "<<b<<endl;

return 0;
}
