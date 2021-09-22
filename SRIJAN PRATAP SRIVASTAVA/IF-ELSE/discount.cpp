#include<iostream>
using namespace std;
int main()
{
    int quantity;
    cout<<"enter the quantity:";
    cin>>quantity;
    if (quantity>1000)
    {
        cout<<90*quantity/100;
    }
    else cout<<100*quantity;
    return 0;
}