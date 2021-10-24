/*problem statement
 program to check whether a number is Strong number or not */

 /*What is Strong number?
Strong number is a special number whose sum of factorial of digits is equal to the original number.
For example: 145 is strong number. Since, 1! + 4! + 5! = 145 */


#include <iostream>
using namespace std;

int main()
{
    int i, originalnum, num, lastDigit, sum;
    long fact;

    /* Input a number from user */
    cout<<"Enter any number to check Strong number: ";
    cin>>num;


    /* Copy the value of num to a temporary variable */
    originalnum = num;

    sum = 0;

    /* Find sum of factorial of digits */
    while(num > 0)
    {

        /* Get last digit of num */
        lastDigit = num % 10;

        /* Find factorial of last digit */
        fact = 1;
        for(i=1; i<=lastDigit; i++)
        {
            fact = fact * i;
        }

        /* Add factorial to sum */
        sum = sum + fact;

        num = num / 10;
    }

    /* Check Strong number condition */
    if(sum == originalnum)
    {
        cout<<originalnum<<" is STRONG NUMBER";
    }
    else
    {
        cout<<originalnum<<" is NOT STRONG NUMBER";
    }

    return 0;
}
