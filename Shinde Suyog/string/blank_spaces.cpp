#include <iostream>
using namespace std;

int main(){
    char str[80];
    cout<<"enter string ";
    cin.getline(str,80);
    int l;
    for(l=0; str[l]!='\0'; l++);    //for length

    int space=0;    //initializing at 0
    for(int i=0; i<=l; i++){
        if(str[i]==' '){
            space++;
        }
    }
    cout<<"numbeer of spaces are "<<space;
}