/*problem statement
  program to print strong numbers between 1 to n */


#include <iostream>
using namespace std;
int main()
{
    int i, j, cur, lastDigit, start, last;
    long long fact, sum;

    /* Input lower and upper limit from user */
    cout<<"Enter lower limit: ";
    cin>>start;
    cout<<"Enter upper limit: ";
    cin>>last;

    cout<<"All Strong numbers between "<<start<<" and "<<last<<" is \n";

    /* Iterate from 1 to end */
    for(i=start; i<=last; i++)
    {
        /* Number to check for strong number */
        cur = i;

        sum = 0;

        /* Find the sum of factorial of digits */
        while(cur > 0)
        {
            fact = 1ll;
            lastDigit = cur % 10;

            /* Find factorial of last digit of current num. */
            for( j=1; j<=lastDigit; j++)
            {
                fact = fact * j;
            }

            sum += fact;

            cur /= 10;
        }

        /* Print 'i' if it is strong number */
        if(sum == i)
        {

            cout<<i<<" ,";
        }
    }

    return 0;
}
