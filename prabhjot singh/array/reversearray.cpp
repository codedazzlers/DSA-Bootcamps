#include<iostream>
using namespace std;
int main()
{int a[10],i,n;
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
cout<<"\nreverse of array:";
for(i=n-1;i>=0;i--)
cout<<a[i]<<" ";
    return 0;
}