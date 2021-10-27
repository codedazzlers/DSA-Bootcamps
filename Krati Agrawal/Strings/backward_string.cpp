#include<iostream>
#include<string>
using namespace std;

int main(){
    string s;
    cout<<"Enter string: ";
    getline(cin,s);
    int l;
    for( l = 0; s[l]!=0;l++);
    cout<<"String from backward is: ";
    for(int i=l-1;i>=0;i--){
        cout<<s[i];
    }
    return 0;
}