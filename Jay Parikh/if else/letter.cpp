#include <iostream>
using namespace std;

int main(){
    char letter;
    cout<<"Enter one letter from A to Z in lowercase ( a to z ) or uppercase ( A to Z )";
    cin>>letter;
    if(letter>=97 && 122>=letter){
        cout<<"lowercase letter";
    }
    else{
        cout<<"Uppercase letter";
    }
    return 0;
}