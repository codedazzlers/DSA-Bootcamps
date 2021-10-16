#include<iostream>
using namespace std;
int main()
{ int a[10],b[10],i,ncount=0;
cout<<"enter the array\n";
for(i=0;i<10;i++)
{
    cin>>a[i];
    b[i]=a[i];
}

cout<<"entered array:";
for(i=0;i<10;i++)
{
    cout<<a[i]<<"  ";
}
cout<<"\ncopied array:";
for(i=0;i<10;i++)
{
    cout<<b[i]<<"  ";
}

 return 0;

}