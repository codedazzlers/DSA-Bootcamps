#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    cout<<"Enter a srting = ";
    getline(cin,s);
    int i, words =0;
    for(i=0;s[i]!='\0';i++){
        if(s[i]==' '){
            words++;
        }
    }
    cout<<"The number of words in the given string are = "<<words+1<<endl;
    return 0;
}