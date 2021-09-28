#include <iostream>

using namespace std;

int main()
{
    //question no 16
    
    cout<<"Hello World";
    int n,k=0;
    cin>> n;
    while(n!=0){
        k=(k*10)+(n%10);
        n=n/10;
    }
    cout<<"reverse of digits is" << k;

    return 0;
}