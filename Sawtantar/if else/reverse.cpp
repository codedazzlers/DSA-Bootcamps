#include<iostream>
using namespace std;
int main(){
    int n,a;
    cout<<"Enter a number : ";
    cin>>n;
    while(n!=0){
     a=n%10;
     n=n/10;
     cout<<a;
    }
    return 0;
}