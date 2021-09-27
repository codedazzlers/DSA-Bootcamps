#include<iostream>
#include<cctype>
using namespace std;
int main(){
    char input;
    cout<<"Enter a character : ";
    cin>>input;
    if(isupper(input)){
        cout<<"Character is in Uppercase";
    }
    else{
         cout<<"Character is in Lowercase";
    }
    return 0;
}