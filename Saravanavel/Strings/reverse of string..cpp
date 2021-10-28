/* program description
   program to reverse a string */


#include<iostream>
using namespace std;

int main( )
{
    char str[80];

    cout<<"Enter string: ";
    cin.getline(str, 80);

    int l; //Hold length of string
    for(l = 0; str[l] != '\0'; l++);    //finding length of string

    int temp;
    for(int i = 0, j = l - 1; i < l/2; i++, j--)
    {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }

    cout << "Reverse string: " << str << endl;

    return 0;
}
