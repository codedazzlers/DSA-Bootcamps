#include <iostream>
using namespace std;

int main()
{
    int r,c,a[10][10],i,j,n,diag = 0;
    
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

    cout <<"Your matrix is:" <<endl;
    for (i=0 ; i<r ; i++)
    {
        for (j=0 ; j<c ; j++)
        {
            cout << a[i][j] <<"\t" ;
        }
        cout << endl;
    }

    for (i=0 ; i<r ; i++)
    {
        diag = diag + a[i][i];
    }
    
    cout <<"Sum of diagonal elements is:"<<endl;
    
    cout << diag <<endl;
        
  

    return 0;
}