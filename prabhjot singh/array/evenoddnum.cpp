#include<iostream>
using namespace std;

int main()
{ int a[10],i,ecount=0,ocount=0;
cout<<"enter the array\n";
for(i=0;i<10;i++)
{
    cin>>a[i];
}

for(i=0;i<10;i++)
{
    if(a[i]%2==0)
    {   ecount++;}
    else
    {ocount++;}
}
cout<<"total even numbers :"<<ecount;
cout<<"\n total odd numbers:"<<ocount;
 return 0;

}