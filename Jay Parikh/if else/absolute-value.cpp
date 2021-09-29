#include <iostream>
using namespace std;

int main(){
    int value;
    cout<<"Enter the value";
    cin>>value;
    if(value<0){
        cout<<value*-1;
    }
    else{
       cout<<value; 
    }
    return 0;
}