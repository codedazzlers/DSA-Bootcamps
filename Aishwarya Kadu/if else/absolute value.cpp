#include <iostream>
int main()
{
    using namespace std;

    int x;
    cout<<"Enter a number"<<endl;
    cin>>x;
    if(x<0)
    {
        x = x*(-1);
    }

    cout<<"Absolute value is "<<x<<endl;


    return 0;
}