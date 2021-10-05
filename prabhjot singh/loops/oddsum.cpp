#include<iostream>
using namespace std;
int main()
{ int n=1,sum=0;
 cout<<" to print sum of odd number from 1 to 100: ";
 while(n<=100)
 {
   sum+=n;
   n+=2;
 }
 cout<<"\nsum of odd number upto 100:"<<sum;
    return 0;

}
