#include <iostream>
using namespace std;
int main()
{
    int salary , years;
    
    cout<<"Enter Salary : ";
    cin>>salary;
    
    cout<<"Enter Years of Service : ";
    cin>>years;
    
    if(years>5)
    {
     int bonus=salary+(salary*5)/100;
     cout<<"The net bonus amount is "<<bonus<<endl;
    }
    else
    {
        cout<<"Can't avail bonus"<<endl;
    }
    return 0;
}