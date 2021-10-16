#include<iostream>
using namespace std;
int main()
{ int a[10],i,count=0,dup,n;
cout<<"enter array size:";
cin>>n;
cout<<"\nenter the array\n";
for(i=0;i<n;i++)
{
    cin>>a[i];
    
}
for(i=0;i<n;i++)
{
  dup=a[i];
 for(int j=i+1;j<n;j++)
  { if(dup==a[j])
    { count++;
        cout<<"\nDuplicate element "<<a[j]<<" is going to be deleted. ";
     for(int k=j;j<n-1;k++)
     a[k]=a[k+1];
     n--;
    }
  }
  
}
cout<<"\narray after deletion";
for(i=0;i<n;i++)
cout<<a[i]<<" ";
cout<<"\nno. of duplicate value deleted: "<<count;
 return 0;

}