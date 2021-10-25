/*problem statement
 program to print all prime numbers between 1 to n */




#include <iostream>
using namespace std;

int main()
{
    int i, j, last, isPrime; // isPrime is used as flag variable

    /* Input upper limit to print prime */
    cout<<"Find prime numbers between 1 to : ";
    cin>>last;

    cout<<"All prime numbers between 1 to "<<last<<" are :\n";

    /* Find all Prime numbers between 1 to end */
    for(i=2; i<=last; i++)
    {
        /* Assume that the current number is Prime */
        isPrime = 1;

        /* Check if the current number i is prime or not */
        for(j=2; j<=i/2; j++)
        {
            /*
             * If i is divisible by any number other than 1 and self
             * then it is not prime number
             */
            if(i%j==0)
            {
                isPrime = 0;
                break;
            }
        }

        /* If the number is prime then print */
        if(isPrime==1)
        {
           cout<<i<<" ,";
        }
    }

    return 0;
}
