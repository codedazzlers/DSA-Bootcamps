#include <iostream>

using namespace std;

int main()
{

    int a[5][5],b[5][5],r,c,i,j,sum;

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

    for(i=0;i<r;i++)
    {
        sum = 0;
        for(j=0;j<c;j++)
        {
            sum += a[i][j];
        }
        cout <<"Sum of elements of Row:"<<"  "<< sum <<endl;
    }    

    for(i=0;i<r;i++)
    {
        sum = 0;
        for(j=0;j<c;j++)
        {
            sum += a[j][i];
        }
        cout <<"Sum of elements of Column:"<<"  "<< sum <<endl;
    } 

    return 0;
}