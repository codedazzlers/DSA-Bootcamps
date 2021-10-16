
#include<iostream>
using namespace std;
int main()
{
int a[5][5],b[5][5],c[5][5],i,j,n,m,p,q;
cout<<"Enter the row and coloumn of matrix 1 (max.5)\n ";
cin>>n;
cout<<"*";
cin>>m;
cout<<"Enter the row and coloumn of matrix 2 (max.5) \n";
cin>>p;
cout<<"*";
cin>>q;

if (m==p)
{
cout<<"\nMultiplication possible "<<endl;
cout<<"\nEnter the elements of matrix 1 "<<endl;
for (i=1;i<=n;i++)
{
for (j=1;j<=m;j++)
cin>>a[i][j];
}
cout<<"\nElements of matrix 1 are ";
for (i=1;i<=n;i++)
{
cout<<endl;
for (j=1;j<=m;j++)
cout<<a[i][j]<<" ";
}
cout<<"\nEnter the elements of matrix 2 \n";
for (i=1;i<=p;i++)
{
for (j=1;j<=q;j++)
cin>>b[i][j];
}
cout<<"\nElements of matrix 2 are \n";
for (i=1;i<=p;i++)
{
cout<<endl;
for (j=1;j<=q;j++)
cout<<b[i][j]<<" ";
}
cout<<"\nMultiplication \n";
for (i=1;i<=n;i++)
{
for (j=1;j<=q;j++)
{
c[i][j]=0;
for (int k=1;k<=n;k++)
{
c[i][j]=c[i][j]+(a[j][k]*b[k][j]);
}
}
}
}
else
{
cout<<"\nMultiplication not possible ";
}
cout<<"\nresultant matrix:";
for(i=1;i<=n;i++)
{
cout<<endl;
for (j=1;j<=q;j++)
cout<<c[i][j]<<" ";
}

return 0;
}
