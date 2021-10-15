/* problem statement
A company decided to give bonus of 5% to employee if his/her year of service is more than 5 years.
Ask user for their salary and year of service and print the net bonus amount. */

#include<iostream>

using namespace std;

int main(){

double bonus=0.0;
int salary,work_experience;

cout<<"Enter your work experience"<<endl;
cin>>work_experience;

if(work_experience>5){
    cout<<"Enter salary:"<<endl;
    cin>>salary;
    bonus=0.05*salary;
    cout<<"Your bonus is "<<bonus<<endl;
}
else
    cout<<"No bonus";
return 0;
}

