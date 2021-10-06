#include <iostream>
#include <string>
using namespace std;
int main(){
    string str;
    cout<<"Enter a string : ";
    getline(cin,str);
    cout<<"String in Lower case: ";
    for(int i=0;str[i]!=0;i++){
        if(str[i]>='A' && str[i] <='Z'){
            str[i]=str[i]+32;
            cout<<str[i];
        }
        else{
            cout<<str[i];
        }
    }
    return 0;
}
