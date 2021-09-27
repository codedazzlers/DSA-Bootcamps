#include <iostream>

#define n 3
using namespace std;

int main()
{
    int A[n][n]; 
    int B[n][n];

    int row, col, s_E;
    cout<<"Enter elements in matrix A of size : \n"<<n;
    for(row=0; row<n; row++)
    {
        for(col=0; col<n; col++)
        {
            cin>>A[row][col];
        }
    }
    cout<<"\nEnter elements in matrix B of size : \n"<<endl;
    for(row=0; row<n; row++)
    {
        for(col=0; col<n; col++)
        {
            cin>>B[row][col];
        }
    }
    s_E = 1;

    for(row=0; row<n; row++)
    {
        for(col=0; col<n; col++)
        {
            if(A[row][col] != B[row][col])
            {
                s_E= 0;
                break;
            }
        }
    }
    if(s_E== 1)
    {
        cout<<"\nMatrix A is equal to Matrix B";
    }
    else
    {
        cout<<"\nMatrix A is not equal to Matrix B";
    }

    return 0;
}

