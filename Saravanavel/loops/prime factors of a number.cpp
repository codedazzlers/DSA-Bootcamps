/*problem statement
 program to find prime factors of a number */



#include <iostream>
using namespace std;

int main()
{
    int i, j, num, isPrime;

    /* Input a number from user */
    cout<<"Enter any number to print Prime factors: ";
    cin>>num;

    cout<<"All Prime Factors of "<<num<<" are \n";

    /* Find all Prime factors */
    for(i=2; i<=num; i++)
    {
        /* Check 'i' for factor of num */
        if(num%i==0)
        {
            /* Check 'i' for Prime */
            isPrime = 1;
            for(j=2; j<=i/2; j++)
            {
                if(i%j==0)
                {
                    isPrime = 0;
                    break;
                }
            }

            /* If 'i' is Prime number and factor of num */
            if(isPrime==1)
            {
                cout<<i<<" ";
            }
        }
    }

    return 0;
}
