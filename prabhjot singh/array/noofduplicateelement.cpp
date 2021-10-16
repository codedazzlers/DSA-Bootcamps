#include<iostream>
using namespace std;
int main()
{ int a[10],i,count=0,dup;
cout<<"enter the array\n";
for(i=0;i<10;i++)
{
    cin>>a[i];
    
}
for(i=0;i<10;i++)
{
  dup=a[i];
 for(int j=i+1;j<10;j++)
  { if(dup==a[j])
    {
    count++;
    }
  }
  
}
cout<<"no. of duplicate value: "<<count;
 return 0;

}