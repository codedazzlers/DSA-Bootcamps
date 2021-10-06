#include <iostream>
using namespace std;

int main(){
    char str[80];
    cout<<"enter string";
    cin.getline(str,80);
    int l;
    for(l=0; str[l]!='\0'; l++);    //for length

    for(int i=l-1; i>=0; i--){
        cout<<str[i];
    }
    
}