#include <iostream>

#define n 3
using namespace std;

int main()
{
    int A[n][n]; 
    int B[n][n];
    int C[n][n]; 
    
    int row, col, i, sum;
    cout<<"Enter elements in matrix A of size : \n"<<n;
    for(row=0; row<n; row++)
    {
        for(col=0; col<n; col++)
        {
            cin>>A[row][col];
        }
    }
    cout<<"\nEnter elements in matrix B of size : \n"<<n;
    for(row=0; row<n; row++)
    {
        for(col=0; col<n; col++)
        {
            cin>>B[row][col];
        }
    }
    for(row=0; row<n; row++)
    {
        for(col=0; col<n; col++)
        {
            sum = 0;
            for(i=0; i<n; i++)
            {
                sum += A[row][i] * B[i][col];
            }

            C[row][col] = sum;
        }
    }
    cout<<"\nProduct of matrix A * B = \n";
    for(row=0; row<n; row++)
    {
        for(col=0; col<n; col++)
        {
            cout<<C[row][col];
        }
        cout<<"\n";
    }

    return 0;
}
