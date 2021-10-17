#include<iostream>
using namespace std;
int main()
{
int sal, yoe;
cout<<"Enter your salary"<<endl;
cin>>sal;
cout<<"Enter your years of experience"<<endl;
cin>>yoe;

if(yoe>5)
{
    cout<<"You get a 5% bonus. Your net bonus amount is "<<(.05*sal)<<endl;
}
else{
    cout<<"No bonus"<<endl;
}
return 0;
}
