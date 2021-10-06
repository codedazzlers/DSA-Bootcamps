#include <iostream>
using namespace std;

int main()
{
    int num,first,last;

    cout<<"Enter a number:"<<endl;
    cin>>num;

    first=num;
    while(first>=10)
    {
        first=first/10;
    }
    cout<<"First digit is:"<<first<<endl;

    last = num%10;
    cout<<"Last digit is:"<<last<<endl;
    


    return 0;
}