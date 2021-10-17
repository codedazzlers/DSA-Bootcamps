#include<iostream>
using namespace std;
int main()
{ int n,i,sum=0;
 cout<<" to print sum of number from 1 to n: ";
 cout<<"\n enter the  upperlimit number:";
 cin>>n;
 for(i=1;i<=n;i++)
 {
   sum+=i;
 }
 cout<<"sum of numbers from 1 to "<<n<<" :\t"<<sum;
    return 0;

}
