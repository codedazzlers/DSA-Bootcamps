#include <iostream>
using namespace std;
int main(){
    int i=0;
    string str;
    getline(cin,str);
    while(str[i]){
        i=i+1;
    }
    i=i-1;
    while(i>=0){
        cout<<str[i];
        i=i-1;
    }
}

