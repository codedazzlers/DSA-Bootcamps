#include <iostream>
using namespace std;

#define SIZE 3

int main()
{
    int A[SIZE][SIZE];
    int B[SIZE][SIZE];
    int C[SIZE][SIZE];

    int row, col;


    cout<<"Enter elements in matrix A of size 3x3: "<<endl;
    for(row=0; row<SIZE; row++)
    {
        for(col=0; col<SIZE; col++)
        {
            cin>>A[row][col];
        }
    }


    cout<<"Enter elements in matrix B of size 3x3: "<<endl;
    for(row=0; row<SIZE; row++)
    {
        for(col=0; col<SIZE; col++)
        {
            cin>>B[row][col];
        }
    }

    for(row=0; row<SIZE; row++)
    {
        for(col=0; col<SIZE; col++)
        {

            C[row][col] = A[row][col] - B[row][col];
        }
    }

    cout<<"Subtraction of matrices A-B =  "<<endl;
    for(row=0; row<SIZE; row++)
    {
        for(col=0; col<SIZE; col++)
        {
            cout<<C[row][col]<<"\t";
        }
        cout<<endl;
    }

    return 0;
}
