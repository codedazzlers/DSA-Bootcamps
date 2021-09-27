#include <iostream>
using namespace std;

int main()
{
    int length,breadth;

        cout << "Enter length:" <<endl;
        cin>> length;
        cout << "Enter breadth:"<<endl;
        cin>>breadth;

    if (length==breadth)
    {
       cout << "It is a Square!" ;
    }
    else
    {
        cout << "No! It is not a Square!";
    }

    return 0;
}