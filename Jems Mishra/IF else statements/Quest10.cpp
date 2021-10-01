#include <iostream>
using namespace std;

int main()
{
    int x=2,y=5,z=0,one,two,three,four,five;

    one = (x==2);
    cout<<"Answer of a is:" << one << endl;

    two = (x!=5);
    cout<<"Answer of b is:"<< two << endl;

    three = (x!=5 && y>=5);
    cout<<"Answer of c is:"<< three << endl;

    four = (z!=0 || x==2);
    cout<<"Answer of d is:"<< two << endl;

    five = !(y<10);
    cout<<"Answer of e is:"<< two << endl;

   return 0;
}