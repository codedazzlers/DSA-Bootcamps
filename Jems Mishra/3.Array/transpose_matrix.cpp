#include <iostream>

using namespace std;

int main()
{
    
    int a[5][5],b[5][5],r,c,i,j;
    
    cout<<"Enter the number of rows:";
    cin>>r;
    cout<<"Enter the number of columns:";
    cin>>c;
    
    cout<<"Enter the elements of the matrix:";
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
        cin>>a[i][j];
        }
    }
    
    cout<<" your matrix is:"<<endl;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
     
        cout<<a[i][j]<<" ";
        cout<<endl;
    }
     
    /*for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)

            b[j][i]=a[i][j];
    }
     
    
    cout<<"Transpose:"<<endl;
    for(i=0;i<c;i++)
    {
        for(j=0;j<r;j++)
            cout<<b[i][j]<<"  ";
            cout<<endl;
   
    }*/

    if (b[j][i]=a[i][j])
    {
        cout << "The matrix is symmetric!" <<endl;
    }
    else
    {
        cout << "The matrix is not symmetric!" <<endl;
    }
    
   return 0;
}
