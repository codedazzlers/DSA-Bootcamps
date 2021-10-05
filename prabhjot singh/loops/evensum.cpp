#include<iostream>
using namespace std;
int main()
{ int n=2,sum=0;
 cout<<" to print sum of even number from 1 to 100: ";
 while(n<=100)
 {
   sum+=n;
   n+=2;
 }
 cout<<"\nsum of even number:"<<sum;
    return 0;

}
