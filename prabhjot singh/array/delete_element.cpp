//to delete element from given position in an array.
#include<iostream>
using namespace std;
int main()
{int a[10],i,n,pos,item;
cout<<"\nenter array size(max. 10) :";
cin>>n;
cout<<"\nenter array :";
for ( i = 0; i < n; i++)
{cin>>a[i];
}
cout<<"\narray before deletion:";
for ( i = 0; i < n; i++)
{cout<<a[i]<<" ";
}

cout<<"\nenter the pos of element to delete:";
cin>>pos;
if(pos<n){
for ( i = pos; i < n-1; i++)
{
    item=a[pos];
    a[i]=a[i+1];
}cout<<"\narray after deletion:";
for ( i = 0; i < n-1; i++)
{cout<<a[i]<<" ";
}
cout<<"\nelement "<<item<<" is deleted from array";
}
else
{cout<<"\n position value is out of range";}
return 0;
}