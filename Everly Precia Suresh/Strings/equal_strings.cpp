#include <iostream>
#include <string>
using namespace std;
int main(){
    string s,s1;
    cout<<"Enter string 1 : ";
    getline(cin,s);
    cout<<"Enter string 2 : ";
    getline(cin,s1);
    if(s==s1){
        cout<<"Strings are equal"<<endl;
    }
    else{
        cout<<"Strings are not equal"<<endl;
    }
    return 0;
}