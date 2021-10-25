#include<iostream>
#include<string>
using namespace std;
int main(){
    string s1, s2;
    cout<<"Enter string s1 : ";
    getline(cin, s1);
    cout << "Enter string s2 : ";
    getline(cin, s2);
    if (s1==s2){
        cout<<"Equal strings";
    }
    else{
        cout<<"Strings not equal";
    }
    return 0;
}