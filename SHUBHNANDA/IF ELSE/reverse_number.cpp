#include<iostream>
using namespace std;
int main(){
    int x,rev;
    cout<<"Enter a number : ";
    cin>>x;
    while(x!=0){
     rev=x%10;
     x=x/10;
     cout<<rev;
    }
    return 0;
}
