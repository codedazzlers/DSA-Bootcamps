#include <iostream>
using namespace std;

int main()
{
    int number;

    cout<<"Enter a number:"<<endl;
    cin>>number;

    if(number<0)
    {
        cout<<"Result:"<<number/(-1)<<endl;
    }

    return 0;
}