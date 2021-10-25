/*problem statement
 program to find sum of prime numbers between 1 to n */


#include <iostream>
using namespace std;

int main()
{
    int i, j, last, isPrime, sum=0;

    /* Input upper limit from user */
    cout<<"Find sum of all prime between 1 to : ";
    cin>>last;

    /* Find all prime numbers between 1 to end */
    for(i=2; i<=last; i++)
    {

        /* Check if the current number i is Prime or not */
        isPrime = 1;
        for(j=2; j<=i/2 ;j++)
        {
            if(i%j==0)
            {
                /* 'i' is not prime */
                isPrime = 0;
                break;
            }
        }

        /*
         * If 'i' is Prime then add to sum
         */
        if(isPrime==1)
        {
            sum += i;
        }
    }

    cout<<"Sum of all prime numbers between 1 to "<<last<<" is "<<sum;

    return 0;
}
