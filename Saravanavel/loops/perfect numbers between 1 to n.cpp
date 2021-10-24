/*problem statement
  program to find perfect numbers between 1 to n */

/* What is Perfect number?
Perfect number is a positive integer which is equal to the sum of its proper positive divisors.
For example: 6 is the first perfect number
Proper divisors of 6 are 1, 2, 3
Sum of its proper divisors = 1 + 2 + 3 = 6.
Hence 6 is a perfect number. */


#include <iostream>
using namespace std;

int main()
{
    int i, j, start, last, sum;

    /* Input lower and upper limit from user */
    cout<<"Enter lower limit: ";
    cin>>start;
    cout<<"Enter upper limit: ";
    cin>>last;

    cout<<"All Perfect numbers between "<<start<<" and "<<last<<" is \n:" ;

    /* Iterate from start to end */
    for(i=start; i<=last; i++)
    {
        sum = 0;

        /* Check whether the current number i is Perfect number or not */
        for(j=1; j<i; j++)
        {
            if(i % j == 0)
            {
                sum += j;
            }
        }

        /* If the current number i is Perfect number */
        if(sum == i)
        {


            cout<<i<<" ,";
        }
    }

    return 0;
}
