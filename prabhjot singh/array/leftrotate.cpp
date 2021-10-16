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

cout<<"\nhow many time you want to left rotate the array:";
cin>>r;
for(i=0;i<r;i++)
{temp=a[0];
    for(j=0;j<n;j++)
     {  a[j]=a[j+1]; } 
  a[n-1]=temp;
}   
cout<<"array after "<<r<<" left rotation:";
for(i=0;i<n;i++)
cout<<a[i]<<" ";  
    return 0;
}