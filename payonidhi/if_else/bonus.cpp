#include <iostream>
using namespace std;
int main() {
  int year_service;
  float bonus, salary;
  cout<<"Enter your salary and year of service"<<endl;
  cin>>salary>>year_service;
  if(year_service>5) {
      bonus = (5*salary)/100;    
      cout<<bonus;
  }
  else
  cout<<"No bonus!";
   return 0;
}
