#include <iostream>

using namespace std;

int main()
{
    //question no 14
    cout<<"Hello World";
    int n,sum=0;
    cin>> n;
    while(n!=0){
        sum=sum+(n%10);
        n=n/10;
    }
    cout<<"sum of digits is" << sum;

    return 0;
}
