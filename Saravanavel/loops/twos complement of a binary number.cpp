/*problem statement
  program to find twos complement of a binary number */

/*What is twos complement?
Twos complement of an N-bit number is defined as the complement with respect to 2N. It
is the result of subtracting the number from 2N, which in
 binary is one followed by N zeroes.

In simple words twos complement is defined as sum of
 ones complement of a binary number and 1. */
#include <iostream>
using namespace std;

int main()
{
    int SIZE=8;
    char binary[SIZE + 1], onesComp[SIZE + 1], twosComp[SIZE + 1];
    int i, carry=1;

    cout<<"Enter 8 bit binary value:";
    cin>>binary;


    /* Find ones complement of the binary number */
    for(i=0; i<SIZE; i++)
    {
        if(binary[i] == '1')
        {
            onesComp[i] = '0';
        }
        else if(binary[i] == '0')
        {
            onesComp[i] = '1';
        }
    }
    onesComp[SIZE] = '\0';

    /*
     * Add 1 to the ones complement
     */
    for(i=SIZE-1; i>=0; i--)
    {
        if(onesComp[i] == '1' && carry == 1)
        {
            twosComp[i] = '0';
        }
        else if(onesComp[i] == '0' && carry == 1)
        {
            twosComp[i] = '1';
            carry = 0;
        }
        else
        {
            twosComp[i] = onesComp[i];
        }
    }
    twosComp[SIZE] = '\0';

    cout<<"Original binary =  "<<binary<<endl;
    cout<<"Ones complement =  "<<onesComp<<endl;
    cout<<"Twos complement =  "<<twosComp<<endl;

    return 0;
}
