#include<iostream>
#include<string>
using namespace std;

int main(){
    string s;
    cout<<"Enter string: ";
    getline(cin,s);
    
    int i;
    cout << "Uppercase string: ";
    for (i = 0; s[i] != '\0'; i++)
    {
        if(s[i]>='a' && s[i]<='z'){
            s[i]=s[i]-32;
            cout<<s[i];
        }
        else{
            cout<<s[i];
        }
    }
    return 0;
}