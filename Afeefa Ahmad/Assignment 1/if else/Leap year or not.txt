#include <iostream>
using namespace std;
int main()
{
    int year;
    cout<<"enter year: "<<endl;
    cin>>year;
    
    if (year %100==0)  //For century year
    {
        if (year % 400==0)
            cout<<"It's leap year"<<endl;
        else
            cout<<"Its not a leap year"<<endl;
    }
    
    else   //for a not century year
    {
        if (year%4==0)
            cout<<"Its leap year";
        else
            cout<<"Its not a leap year";
    }
    return 0;
}
