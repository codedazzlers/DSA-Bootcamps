#include<iostream>
using namespace std;
int main(){
    int n,R;
    cout<<"Enter a number : ";
    cin>>n;
    while(n!=0){
     R=n%10;
     n=n/10;
     cout<<R;
    }
    return 0;
}