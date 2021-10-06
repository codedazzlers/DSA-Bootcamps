#include<iostream>
using namespace std;

int main()
{
int a,b,c;
cin>>a>>b>>c;
if (a>b&&a>c)
{
    cout<<a<<"is oldest";
}
else if (b>c)
{
    cout<<b<<"is oldest";
}
else
{
    cout<<"c is oldest";
}



return 0;
}