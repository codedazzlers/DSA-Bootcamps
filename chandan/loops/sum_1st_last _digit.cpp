#include <iostream>

using namespace std;

int main()
{
    //question no 12
    cout<<"Hello World";
    int n,a,b;
    cin>>n;
    b=n%10;
    cout<< "last digit" << b;
    a=n;
    while(a>=10){
    a=a/10;
    }
    cout<< "first digit"<< a;
    cout<<"sum of 1st and last digit is" << a+b;

    return 0;
}
