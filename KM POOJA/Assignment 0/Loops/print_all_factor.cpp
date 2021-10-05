/**
 * C program to print all factors of a number
 */

#include <iostream>
using namespace std;
int main()
{
    int i, num;

    /* Input number from user */
    cout<<"Enter any number to find its factor: ";
    cin>>num;

    cout<<"All factors of "<<num<<" are: "<<endl;

    /* Iterate from 1 to num */
    for(i=1; i<=num; i++)
    {
        /* 
         * If num is exactly divisible by i
         * Then i is a factor of num
         */
        if(num % i == 0)
        {
            cout<<i<<" ";
        }
    }

    return 0;
}