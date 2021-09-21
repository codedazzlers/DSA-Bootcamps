#include <iostream>
#include <math.h>
 
using namespace std;
 
int main()
{
    int N, last, first, n, swap, digits = 0;
 
    
    cout<<"Enter a Number:";
    cin>>N;
 
    n = N;
    last = n % 10;
    
 
    while(n>=10)
    {
        n /= 10;
        digits++;
    }

    first = n;
    
   
    swap=last*pow(10,digits);
    swap=swap+ (N% (int)pow(10,digits));
    swap=swap-last;
    swap=swap+first;
    cout<<N<<" is swapped to "<<swap<<endl;
 
    return 0;
}
