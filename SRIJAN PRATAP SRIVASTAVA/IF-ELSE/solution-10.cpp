#include<iostream>
using namespace std;
int main()
{
    int x=2,y=5,z=0;
    cout<<(x==2)<<" ";
    cout<<(x!=5)<<" ";
    cout<<( x != 5 && y >= 5)<<" ";
    cout<<( z != 0 || x == 2)<<" ";
    cout<<( !(y < 10))<<" ";
    return 0;
}