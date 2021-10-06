#include<iostream>
using namespace std;

int main()
{
int year_of_service;
int salary;
float total_bonus;
cin>>salary;
cin>>year_of_service;
if (year_of_service>5)
{
    total_bonus=(salary*5)/100;
    cout<<total_bonus;
}
else
{
    cout<<"no discount";
}



return 0;
}