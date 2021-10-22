#include<iostream>
#define max_size 50
using namespace std;
int main()
{
    char str[50];
    cout<<"enter string: ";
    cin.getline(str,50);
    int l;
    // length of string
    for(l=0;str[l] != '\0'; l++);

    //Display the string backwards
    for(int i=l-1; i>=0;i--){
        cout<<str[i];
    }

    return 0;
}