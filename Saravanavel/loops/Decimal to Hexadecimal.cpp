/*problem description
    program to convert Decimal to Hexadecimal number system */

#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char HEXVALUE[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};

    long long decimal, tempDecimal;
    char hex[65];
    int index, rem;

    /* Input decimal number from user */
    cout<<"Enter any decimal number: ";
    cin>>decimal;
    tempDecimal = decimal;

    index = 0;

    /* Decimal to hexadecimal conversion */
    while(tempDecimal !=0)
    {
        rem = tempDecimal % 16;

        hex[index] = HEXVALUE[rem];

        tempDecimal /= 16;

        index++;
    }
    hex[index] = '\0';

    strrev(hex);

    cout<<"\nDecimal number = "<<decimal<<endl;
    cout<<"Hexadecimal number = "<<hex;

    return 0;
}
