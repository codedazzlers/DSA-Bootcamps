#include<iostream>
using namespace std;
int main()
{int a[10],i,r,j,temp,n;
cout<<"enter the size of array(max. 10):";
cin>>n;
cout<<"\nenter the array:";
for(i=0;i<n;i++)
{
    cin>>a[i];
}
cout<< "\narray is:";
for(i=0;i<n;i++)
cout<<a[i]<<" ";

cout<<"\nhow many time you want to right rotate the array:";
cin>>r;
for(i=0;i<r;i++)
{temp=a[n-1];
    for(j=n-1;j>0;j--)
     {  a[j]=a[j-1]; } 
  a[0]=temp;
}   
cout<<"array after "<<r<<" right rotation:";
for(i=0;i<n;i++)
cout<<a[i]<<" ";  
    return 0;
}