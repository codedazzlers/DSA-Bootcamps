#include<iostream>
using namespace std;
int main()
{ int wday,aday; //wday-workingday ,aday-attended day
float pert; 
  cout<<"enter the total working days:";
  cin>>wday;
  cout<<"\nhow many days student attend the classes:";
  cin>>aday;
  pert=(float)aday/wday*100;
  cout<<"\nattendence:"<<pert<<"%";
  if(pert<75)
cout<<"\nstudent is not allowed to sit in exams";
else
cout<<"\nstudent is allowed to sit in exams";

    return 0;
}