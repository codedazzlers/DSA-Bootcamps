#include <iostream>
using namespace std;

int main()
{
    int salary,bonus,years;

    cout << "Enter your salary:" << endl;
    cin>>salary;
    cout << "Enter your years of service:" <<endl;
    cin>>years;

    bonus=salary*.05;

    if(years>5)
    {
        cout <<"Bonus is:"<< bonus<<endl;
    }
    else{
        cout << "Work hard!" <<endl;
    }

    return 0;
}