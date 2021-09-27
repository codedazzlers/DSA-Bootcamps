#include <iostream>

#define n 3
using namespace std;

int main()
{
    int A[n][n];
    int row, col, sum = 0;
    cout<<"Enter elements in matrix of size  \n"<< n<<","<<n;
    for(row=0; row<n; row++)
    {
        for(col=0; col<n; col++)
        {
            cin>>A[row][col];
        }
    }
    for(row=0; row<n; row++)
    {
        sum = 0;
        for(col=0; col<n; col++)
        {
            sum += A[row][col];
        }

        cout<<"Sum of elements of Row \n"<< row+1 << sum;
    } 
    for(row=0; row<n; row++)
    {
        sum = 0;
        for(col=0; col<n; col++)
        {
            sum += A[col][row];
        }

        cout<<"Sum of elements of Column \n"<< row+1 << sum;
    }

    return 0;
}
