#include <iostream>
using namespace std;

int main()
{
    int r,c,a[10][10],b[10][10],sum[10][10],i,j,n;

    cout << "Enter number of rows:"<<endl;
    cin >> r;
    cout << "Enter number of columns:"<<endl;
    cin >> c;

    cout <<"Enter elements of first matrix:"<<endl;
    for (i=0 ; i<r ; i++)
    {
        for (j=0 ; j<c ; j++)
        {
            cin >> a[i][j];
        }
        cout << endl;
    }

    cout <<"Enter elements of second matrix:"<<endl;
    for (i=0 ; i<r ; i++)
    {
        for (j=0 ; j<c ; j++)
        {
            cin >> b[i][j];
        }
        cout << endl;
    }

    if (a[i][j] = b[i][j])
    {
        cout <<"Matrices are Equal!"<<endl;
    }
    else
    {
        cout <<"Matrices are not equal!"<< endl;
    }

    return 0;
} 