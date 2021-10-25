/*problem statement
    program to convert Octal to Binary number system */
/*
Decimal	Octal	Binary
0	      0	      000
1	      1	      001
2	      2	      010
3	      3	      011
4	      4	      100
5	      5	      101
6	      6	      110
7	      7	      111
*/

#include <iostream>
using namespace std;

int main()
{
    int OCTALVALUES[] = {0, 1, 10, 11, 100, 101, 110, 111};
    long long octal, tempOctal, binary, place;
    int rem;

    /* Input Octal number from user */
    cout<<"Enter any Octal number: ";
    cin>>octal;
    tempOctal = octal;

    binary = 0;
    place  = 1;

    /* Convert octal to binary */
    while(tempOctal > 0)
    {
        /* Extract the last digit of octal */
        rem = tempOctal % 10;

        /*
         * Get the binary equivalent of octal digit
         * add it to the binary variable
         */
        binary = (OCTALVALUES[rem] * place) + binary;

        /* Remove the last octal digit */
        tempOctal /= 10;

        /* Increase the place value */
        place *= 1000;
    }

    cout<<"Octal number = "<<octal;
    cout<<"Binary number = "<<binary;

    return 0;
}
