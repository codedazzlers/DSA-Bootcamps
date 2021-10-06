#include <iostream>
using namespace std;

int main()
{
    int r,c,a[10][10],i,j,n,det;

    cout << "Enter number of rows for 2 * 2 matrix:"<<endl;
    cin >> r;
    cout << "Enter number of columns for 2 * 2 matrix:"<<endl;
    cin >> c;

    cout <<"Enter elements of the matrix:"<<endl;
    for (i=0 ; i<r ; i++)
    {
        for (j=0 ; j<c ; j++)
        {
            cin >> a[i][j];
        }
    }

    cout <<"Your matrix is:" <<endl;
    for (i=0 ; i<r ; i++)
    {
        for (j=0 ; j<c ; j++)
        {
            cout << a[i][j] <<"\t" ;
        }
        cout << endl;
    }

    cout <<"Determinant of the matrix is:"<<endl;
    det = (a[0][0] * a[1][1]) - (a[0][1] * a[1][0]);

    cout << det << endl;

    return 0;
}