#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    cout<<"Enter String: ";
    getline(cin,s);
    
    int i = 0;
    while(s[i]){
        i++;
    }
    
    cout<<"The length of string is = "<<i<<endl;
    return 0;
}