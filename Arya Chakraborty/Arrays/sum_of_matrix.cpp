#include <iostream>

using namespace std;

int main()
{
    int row, col;
    cout<<"Enter the number of rows: ";
    cin>>row;
    cout<<"Enter the number of column: ";
    cin>>col;
    int m1[row][col], m2[row][col], sum[row][col];
    cout << "Enter the elements of first 1st matrix: ";
    for (int i = 0;i<row;i++ ) {
     for (int j = 0;j < col;j++ ) {
       cin>>m1[i][j];
     }
    }
    cout << "Enter the elements of first 2nd matrix: ";
    for (int i = 0;i<row;i++ ) {
     for (int j = 0;j<col;j++ ) {
       cin>>m2[i][j];
     }
    }

    cout<<"Output: "<<endl;
    for (int i = 0;i<row;i++ ) {
      for (int j = 0;j<col;j++ ) {
        sum[i][j]=m1[i][j]+m2[i][j];
        cout<<sum[i][j]<<" ";
      }
      cout<<endl;
    }
    return 0;
}