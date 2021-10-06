#include <iostream>
using namespace std;

int main()
{
    int i,n,sum=0;

    cout<<"Enter a number n:"<<endl;
    cin>>n;

    
    for(i=1;i<=n;i++)
    {
        
    sum+=i;
    }
    cout<<"Sum of numbers is:"<<sum<<endl;
   

    return 0;
}