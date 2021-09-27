#include <iostream>

#define n 3 
using namespace std;

int main()
{
    int A[n][n];
    int row, col, sum = 0;
    cout<<"Enter elements in matrix of size \n"<<n;
    for(row=0; row<n; row++)
    {
        for(col=0; col<n; col++)
        {
            cin>>A[row][col];
        }
	}	
    for(row=0; row<n; row++)
    {
        sum = sum + A[row][row];
    }

    cout<<"\nSum of main diagonal elements = "<< sum;

    return 0;
}
