
 /*problem statement
  program to calculate factorial of a number */


#include <iostream>
using namespace std;

int main()
{
    int i, num;
    unsigned long long fact=1LL;

    /* Input number from user */
    cout<<"Enter any number to calculate factorial: ";
    cin>>num;


    /* Run loop from 1 to num */
    for(i=1; i<=num; i++)
    {
        fact = fact * i;
    }

    cout<<"Factorial of "<<num<<" is "<<fact;

    return 0;
}
