#include <iostream>
#include <string>
using namespace std;
int main(){
    string s;
    cout<<"Enter a string : ";
    getline(cin,s);
    int i=0;
    for(i=0;s[i]!='\0';i++);
    int k=0;
    char rev[30];
    for(int l=i-1;l>=0;l--){
      rev[k]=s[l];
      k++;
    }
    rev[k]='\0';
    if(rev==s){
        cout<<"The String is palindrome";
    }
    else{
        cout<<"The string is not palindrome";
    }
    return 0;
}