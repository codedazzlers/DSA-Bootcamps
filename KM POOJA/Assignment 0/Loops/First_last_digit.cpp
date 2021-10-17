/* C program to find first and last digit of a number*/
 
#include<iostream>
#include <math.h>
using namespace std;
int main()
{
    int n, firstDigit, lastDigit, digits;

    /* Input a number from user */
   cout<<"Enter any number: ";
    cin>>n;

    /* Find last digit */
    lastDigit = n % 10;     

    /* Total number of digits - 1 */
    digits = (int)log10(n); 

    /* Find first digit */
    firstDigit = (int)(n / pow(10, digits)); 

   cout<<"First digit = "<< firstDigit<<endl;
   cout<<"Last digit = "<<lastDigit<<endl;

    return 0;
}