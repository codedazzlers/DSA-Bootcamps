#include<iostream>
using namespace std;
int main()
{
    int salary,no_of_yrs;
    cout<<"enter your salary and years of service:";
    cout<<"salary:";
    cin>>salary;
    cout<<"no of years:";
    cin>>no_of_yrs;
    if (no_of_yrs>5)
    {
        cout<<(5*salary)/100;
    }
    else cout<<0;
    return 0;
}