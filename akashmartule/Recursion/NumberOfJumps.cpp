#include<iostream>
using namespace std;
int NumberOfJumps(int n)
{
    if(n<0)
    return 0;

    if(n==0)
    return 1;

    return NumberOfJumps(n-1)+NumberOfJumps(n-2)+NumberOfJumps(n-3);
    
}

int main()
{
    int n;
    cout<<"Number of stairs: ";
    cin>>n;

    cout<<"Number of jumps: "<<NumberOfJumps(n);
    }