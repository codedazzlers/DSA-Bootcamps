#include <iostream>
#include <string>
using namespace std;
int main(){
    string s;
    cout<<"Enter a string : ";
    getline(cin,s);
    cout<<"Lowercase string: ";
    for(int i=0;s[i]!='\0';i++){
        if(s[i]>='A' && s[i] <='Z'){
            s[i]=s[i]+32;
            cout<<s[i];
        }
        else{
            cout<<s[i];
        }
    }
    return 0;
}