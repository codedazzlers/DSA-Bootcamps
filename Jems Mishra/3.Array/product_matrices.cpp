#include <iostream>

using namespace std;

int main()
{
    int r,c,a[10][10],b[10][10],mul[10][10],i,j,k,n,prod;
    
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
    }

    cout <<"Enter elements of second matrix:";
    for (i=0 ; i<r ; i++)
    {
        for (j=0 ; j<c ; j++)
        {
            cin >> b[i][j];
        }
    }

    for (i=0 ; i<r ; i++)
    {
        for (j=0 ; j<c ; j++)
        {
            prod = 0;
            for (k=0 ; k<r ; k++)
            {
                prod = prod + (a[i][j] * b[i][j]);
                mul[i][j] = prod;
            }   
        }
    } 

    cout<<"Multiplication:"<<endl;
    for (i=0 ; i<r ; i++)
    {
        for (j=0 ; j<c ; j++)
        {
            cout << mul[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}