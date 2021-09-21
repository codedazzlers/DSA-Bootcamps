#include<iostream>
using namespace std;
int main(){
    int n,R,rev=0;
    cout<<"Enter a number : ";
    cin>>n;
    while(n!=0){
     R=n%10;
     rev=(rev*10)+R;
     n=n/10;
    }
    cout<<rev<<endl;
    return 0;
}