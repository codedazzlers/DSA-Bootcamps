/*problem description
 program to check whether a number is armstrong number or not */

/* What is Armstrong number?
An Armstrong number is a n-digit number that is equal to the sum of the nth power of its digits. For example -
6 = 61 = 6
371 = 33 + 73 + 13 = 371 */

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int originalnum, num, lastDigit, digits, sum;

    /* Input number from user */
    cout<<"Enter any number to check Armstrong number: ";
    cin>>num;

    sum = 0;

    /* Copy the value of num for processing */
    originalnum = num;

    /* Find total digits in num */
    digits = (int) log10(num) + 1;

    /* Calculate sum of power of digits */
    while(num > 0)
    {
        /* Extract the last digit */
        lastDigit = num % 10;

        /* Compute sum of power of last digit */
        sum = sum + round(pow(lastDigit, digits));

        /* Remove the last digit */
        num = num / 10;
    }

    /* Check for Armstrong number */
    if(originalnum == sum)
    {
        cout<<originalnum<<" is ARMSTRONG NUMBER";
    }
    else
    {
        cout<<originalnum<<" is NOT ARMSTRONG NUMBER";
    }

    return 0;
}
