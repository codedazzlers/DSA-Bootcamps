#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Please enter only two distinct values!\n";
    cout<<"Enter First Number : ";
    cin>>a;
    cout<<"Enter Second Number : ";
    cin>>b;
    if(a>b)
    cout<<a<<" is the greatest among the input"<<endl;
    else
    cout<<b<<" is the greatest among the input"<<endl;
    return 0;
}