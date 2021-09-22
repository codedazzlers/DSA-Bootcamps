#include <iostream>
using namespace std;

int main()
{
    int num, sum=0;

    cout<<"Enter any number to find sum of its digit: "<<endl;
    cin>>num;

    while(num!=0)
    {

        sum += num % 10;


        num = num / 10;
    }

    cout<<"Sum of digits is:"<< sum<<endl;

    return 0;
}
