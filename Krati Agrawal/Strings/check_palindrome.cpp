#include<iostream>
#include<string>
using namespace std;

int main (){
    string s;
    cout<<"Enter a string : ";
    getline(cin,s);
    int l;
    for(l=0; s[l]!='\0';l++);
    int i;
    for (i = 0; (i < l / 2) && (s[i] == s[l - i - 1]); i++); //Comparing first element with last element till middle of string
    
    if(i==l/2){
        cout<<"Palindrome";
    }
    else{
        cout<<"Not a Palindrome";
    }
    return 0;
}