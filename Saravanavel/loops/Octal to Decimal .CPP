/*program description
    program to convert Octal to Decimal number system */

#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    long long octal, tempOctal, decimal;
    int rem, place;

    /* Input octal number from user */
    cout<<"Enter any octal number: ";
    cin>>octal;
    tempOctal = octal;

    decimal = 0;
    place = 0;

    /*
     * Convert octal to decimal
     */
    while(tempOctal > 0)
    {
         /* Extract the last digit of octal */
        rem = tempOctal % 10;

        /* Convert last octal digit to decimal */
        decimal += pow(8, place) * rem;

        /* Remove the last octal digit */
        tempOctal /= 10;

        place++;
    }

    cout<<"Octal number = "<<octal<<endl;
    cout<<"Decimal number = "<<decimal;

    return 0;
}
