#include <iostream>
using namespace std;

int main()
{
    int r,c,a[10][10],b[10][10],i,j,n;

    cout << "Enter number of rows:"<<endl;
    cin >> r;
    cout << "Enter number of columns:"<<endl;
    cin >> c;

    cout <<"Enter elements of the matrix:"<<endl;
    for (i=0 ; i<r ; i++)
    {
        for (j=0 ; j<c ; j++)
        {
            cin >> a[i][j];
        }
    }

    cout << "Enter the scaler to be multiplied:" <<endl;
    cin >> n;

    for (i=0 ; i<r ; i++)
    {
        for (j=0 ; j<c ; j++)
        {
            b[i][j] = n * a[i][j];
        }
    }

    cout <<"Scaler Multiplication is:"<<endl;
    for (i=0 ; i<r ; i++)
    {
        for (j=0 ; j<c ; j++)
        {
            cout << b[i][j] <<"\t";
        }
        cout <<endl;
    }

    return 0;
}