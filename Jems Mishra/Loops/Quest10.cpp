#include <iostream>
using namespace std;

int main()
{
    int n,digit=0;

    cout<<"Enter a number:"<<endl;
    cin>>n;

    do
    {
        n=n/10;
        digit++;

    }   
    while (n>0); 
    

    cout<<"Total digits:" <<digit<<endl;

    return 0;
}