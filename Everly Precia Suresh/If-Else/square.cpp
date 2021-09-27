#include <iostream>
using namespace std;
int main(){
    int l,b;
    cout<<"Enter Length of Rectangle :";
    cin>>l;
    cout<<"Enter Breadth of Rectangle:";
    cin>>b;
    if(l==b){
        cout<<"These dimensions form a square";
    }
    else{
        cout<<"These dimensions don't form a square";
    }
    return 0;
}