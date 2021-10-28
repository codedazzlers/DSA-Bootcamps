/* program description
  program to find the length of string */


#include<iostream>
using namespace std;

int main( )
{
    char str[80];

    cout<<"Enter string: ";
    cin.getline(str, 80);

    int i; //Hold length of string

    for(i = 0; str[i] != '\0'; i++);

    cout << "Length of string is: " << i;

    return 0;
}
