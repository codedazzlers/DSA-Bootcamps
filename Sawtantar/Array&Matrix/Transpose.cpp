

#include <iostream>

using namespace std;

int main()
{
int i,j,r,c,a[100][100],trans[100][100];

cout  << "Enter Row  of matrix A" << endl ;
cin >> r;
cout << endl  << "Enter column  of matrix A"  << endl  ;
cin >> c;

cout << endl << "enter the elements of matrix :" << endl;
for(i=0;i<r;i++)
for(j=0;j<c;j++)
{
    cin >> a[i][j];
    
}

cout << endl << "Before Transpose :" << endl;
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
    
    cout << a[i][j] << "  ";
}
cout << endl;
}

for(i=0;i<r;i++)
    {
        trans[i][j]=0;
   
    for(j=0;j<c;j++)
    {
        trans[i][j]=a[j][i];
    }
}
cout << endl << "After Transpose:" << endl;

for(i=0;i<r;i++)    
 {
    for(j=0;j<c;j++)
    {
    cout << trans[i][j] << " ";
    }
     cout << endl;
 }    
}

 
