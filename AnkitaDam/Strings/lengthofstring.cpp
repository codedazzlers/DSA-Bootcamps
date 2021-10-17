#include <iostream>
using namespace std;
int main(){
    int i=0;
    string str;
    getline(cin,str);
    while(str[i]){
        i=i+1;
    }
    cout<<"Length of string is: "<<i;
}
