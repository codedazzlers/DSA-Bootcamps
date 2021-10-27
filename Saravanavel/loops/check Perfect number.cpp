/*problem statement
 program to check whether a number is perfect number or not */



#include <iostream>
using namespace std;

int main()
{
    int i, num, sum = 0;

    /* Input a number from user */
    cout<<"Enter any number to check perfect number: ";
    cin>>num;

    /* Calculate sum of all proper divisors */
    for(i = 1; i <= num / 2; i++)
    {
        /* If i is a divisor of num */
        if(num%i == 0)
        {
            sum += i;
        }
    }

    /* Check whether the sum of proper divisors is equal to num */
    if(sum == num && num > 0)
    {
        cout<<num<<" is PERFECT NUMBER";
    }
    else
    {
        cout<<num<< " is NOT PERFECT NUMBER";
    }

    return 0;
}
