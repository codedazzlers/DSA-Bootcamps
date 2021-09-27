#include <iostream>
#define n 3
using namespace std;

int main()
{
    int A[n][n];
    int B[n][n];
    int C[n][n]; 

    int row, col;
    cout<<"Enter elements in matrix A of size 3x3: \n"<<endl;
    for(row=0; row<n; row++)
    {
        for(col=0; col<n; col++)
        {
            cin>>A[row][col];
        }
    }
    cout<<"\nEnter elements in matrix B of size 3x3: \n"<<endl;
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
            C[row][col] = A[row][col] + B[row][col];
        }
    }

    cout<<"\nSum of matrices A+B = \n"<<endl;
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
