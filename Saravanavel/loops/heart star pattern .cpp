/*problem description
 Program to print heart star pattern with name in center */


#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    int i, j, n;
    char name[100];
    int len;

    cout<<"Enter your name: ";
    cin>>name;


    cout<<"Enter value of n : ";
    cin>>n;


    len = strlen(name);

    // Print upper part of the heart shape
    for(i=n/2; i<=n; i+=2)
    {
        for(j=1; j<n-i; j+=2)
        {
            cout<<" ";
        }

        for(j=1; j<=i; j++)
        {
            cout<<"*";
        }

        for(j=1; j<=n-i; j++)
        {
            cout<<" ";
        }

        for(j=1; j<=i; j++)
        {
            cout<<"*";
        }

        cout<<"\n";
    }

    // Prints lower triangular part of the pattern
    for(i=n; i>=1; i--)
    {
        for(j=i; j<n; j++)
        {
            cout<<" ";
        }

        // Print the name
        if(i == n)
        {
            for(j=1; j<=(n * 2-len)/2; j++)
            {
                cout<<"*";
            }

            cout<<name;

            for(j=1; j<(n*2-len)/2; j++)
            {
                cout<<"*";
            }
        }
        else
        {
            for(j=1; j<=(i*2)-1; j++)
            {
                cout<<"*";
            }
        }

        cout<<"\n";
    }

    return 0;
}
