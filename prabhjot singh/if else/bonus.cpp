#include<iostream>
using namespace std;
int main()
{float bonus,salary,ser_yr;
 cout<<"enter your salary and year of service";
 cin>>salary>>ser_yr;
 if(ser_yr>5)
 {cout<<"net bonus:"<<0.5*salary*12;
 }
 else
 cout<<"not eligible for bonus";
    return 0;

}