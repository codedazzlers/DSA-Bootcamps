#include<iostream>
using namespace std;

int main()
{
    int n, num, rev = 0;

    cout<<"Enter any number:"<<endl;
    cin>>n;

    num = n;


    while(n != 0)
    {
        rev = (rev * 10) + (n % 10);
        n  /= 10;
    }


    if(rev == num)
    {
        cout<<num<< " is a pallindrome"<<endl;
    }
    else
    {
        cout<<num<< "is not a pallindrome ."<<endl;
    }

    return 0;
}
