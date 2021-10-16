#include<iostream>
using namespace std;
int main()
{ int a[10],i,ncount=0;
cout<<"enter the array\n";
for(i=0;i<10;i++)
{
    cin>>a[i];
}

for(i=0;i<10;i++)
{
    if(a[i]<0)
    {  ncount++;}

}
cout<<"total negative numbers :"<<ncount;
 return 0;

}