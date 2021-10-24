/*problem description
 Program to print X number pattern */

#include <iostream>
using namespace std;

int main()
{
    int i, j, N;

    cout<<"Enter N: ";
    cin>>N;

    // First part of the pattern
    for(i=1; i<=N; i++)
    {
        // Print trailing spaces
        for(j=1; j<i; j++)
        {
            cout<<" ";
        }

        cout<<i;

        // Print central spacces
        for(j=1; j<=((N - i) * 2 - 1); j++)
        {
            cout<<" ";
        }

        // Don't print for last row
        if(i != N)
            cout<<i;

        // Moves on to the next row
        cout<<"\n";
    }

    // Second part of the pattern
    for(i=N-1; i>=1; i--)
    {
        // Print trailing spaces
        for(j=1; j<i; j++)
        {
            cout<<" ";
        }

        cout<<i;

        // Print central spaces
        for(j=1; j<=((N - i ) * 2 - 1); j++)
        {
           cout<<" ";
        }

        cout<<i;

        // Move on to the next line
        cout<<"\n";
    }

    return 0;
}
