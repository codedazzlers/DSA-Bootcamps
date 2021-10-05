#include <iostream>
using namespace std;

int main(){
    char str[80];
    cout<<"enter string ";
    cin.getline(str,80);

    int l;
    for(l=0; str[l]!='\0';l++);

    int i;
    for(i=0; (i<l/2) && (str[i]==str[l-i-1]);i++);
    
    if(i==l/2)
        cout<<"palindrome";
    else
        cout<<"not palindrome";

    return 0;

}