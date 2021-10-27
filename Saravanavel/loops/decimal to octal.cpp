/*program description
    program to convert Decimal to Octal number system */

#include <iostream>
using namespace std;

int main()
{
    long long decimal, tempDecimal, octal;
    int i, rem, place = 1;

    octal = 0;

    /* Input decimal number from user */
    cout<<"Enter any decimal number: ";
    cin>>decimal;

    tempDecimal = decimal;

    /* Decimal to octal conversion */
    while(tempDecimal > 0)
    {
        rem = tempDecimal % 8;

        octal = (rem * place) + octal;

        tempDecimal /= 8;

        place *= 10;
    }

    cout<<"\nDecimal number = "<<decimal<<endl;
    cout<<"Octal number = "<<octal;

    return 0;
}
