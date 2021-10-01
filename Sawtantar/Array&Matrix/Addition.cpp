

#include <iostream>

using namespace std;

int main()
{
int i,j,a[100][100],b[100][100],sum[100][100];

cout  << "Enter elements of Matrix A" << endl ;
for(i=0;i<2;i++)

  for(j=0;j<2;j++)
  
  {
     cout << "Element a" << i+1 << j+1 << " : ";
  cin >> a[i][j];
  }

cout <<endl << "Enter elements of Matrix b" << endl ;
for(i=0;i<2;i++)

  for(j=0;j<2;j++)
  {
     cout << "Element b" << i + 1 << j + 1 << " : ";
     cin >> b[i][j];
  }
  sum[i][j]=0;
for(i=0;i<2;i++)
  for(j=0;j<2;j++)
  {
sum[i][j] = a[i][j] + b[i][j];
}

cout << endl << "Sum of Two matrices are"<< endl;
for(i=0;i<2;i++)
  {
  for(j=0;j<2;j++)
     {
       cout << sum[i][j] << " ";
    
     }
     cout << endl;
  }
}

