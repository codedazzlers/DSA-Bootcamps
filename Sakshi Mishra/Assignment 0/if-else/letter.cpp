#include <iostream>
using namespace std;

int main(){
    char letter;
    cout<<"Enter a letter";
    cin>>letter;
    if(letter>=97 && 122>=letter){
        cout<<"lowercase letter";
    }
    else{
        cout<<"Uppercase letter";
    }
    return 0;
}