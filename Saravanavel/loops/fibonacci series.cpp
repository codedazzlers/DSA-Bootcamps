/*problem statement
  program to print fibonacci series upto n terms */



/*What is Fibonacci series?
Fibonacci series is a series of numbers where the current number is the sum
of previous two terms.
For Example: 0, 1, 1, 2, 3, 5, 8, 13, 21, ... , (n-1th + n-2th) */

#include <iostream>
using namespace std;

int main()
{
    int a, b, c, i, terms;

    /* Input number from user */
    cout<<"Enter number of terms: ";
    cin>>terms;

    /* Fibonacci magic initialization */
    a = 0;
    b = 1;
    c = 0;

    cout<<"Fibonacci terms: \n";

    /* Iterate through n terms */
    for(i=1; i<=terms; i++)
    {

        cout<<c<<" ";

        a = b;     // Copy n-1 to n-2
        b = c;     // Copy current to n-1
        c = a + b; // New term
    }

    return 0;
}
