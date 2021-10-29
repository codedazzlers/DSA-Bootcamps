/* program description
   program to display string from backward. */



#include<iostream>
using namespace std;

int main( )
{
    char str[80];

    cout<<"Enter string: ";
    cin.getline(str, 80);

    int l; //Hold length of string

    //Find the length of the string
    for(l = 0; str[l] != '\0'; l++);

    //Display the string backwards
    for(int i = l - 1; i >= 0; i--)
    {
        cout << str[i];
    }

    return 0;
}
