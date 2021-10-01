#include<iostream>
using namespace std;
int main()
{
    int length,breadth;
    cout<<"length=";cin>>length;
    cout<<"breadth=";cin>>breadth;

    if (length==breadth)
    {
        cout<<" it is a square";
    }
    else 
        cout<<"it is a rectangle";
    
    return 0;
}