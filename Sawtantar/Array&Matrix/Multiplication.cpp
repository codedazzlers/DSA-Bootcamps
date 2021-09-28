

#include <iostream>

using namespace std;

int main()
{
int i,j,m,n,r,c,k,a[100][100],b[100][100],mult[100][100];
cout  << "Enter Row  of matrix A" << endl ;
cin >> m;
cout << endl  << "Enter column  of matrix A"  << endl  ;
cin >> n;

cout  << endl << "Enter Row  of matrix B"  << endl  ;
cin >> r;
cout << endl  << "Enter column  of matrix B"  << endl  ;
cin >> c;

 if(n!=r)
 {
     cout << "PLease Enter the value again as n does not equals to r";
 }
 else
 {
cout  << "Enter elements of Matrix A" << endl ;
for(i=0;i<m;i++)
  for(j=0;j<n;j++)
{
     cin >> a[i][j];
  }
  
cout <<endl << "Enter elements of Matrix b" << endl ;
for(i=0;i<r;i++)

  for(j=0;j<c;j++)
  {
     cin >> b[i][j];
  }
  
for(i=0;i<m;i++)
  for(j=0;j<c;j++)
  {
     mult[i][j]=0;
  for(k=0;k<n;k++)
  {
mult[i][j] += a[i][k]*b[k][j];
}
}
cout << endl << "Product of Two matrices are"<< endl;
for(i=0;i<m;i++)
  {
  for(j=0;j<c;j++)
     {
       cout << mult[i][j] << " ";
    
     }
     cout << endl;
  }
     
     
 }
}
 
 
 
 
 
 
