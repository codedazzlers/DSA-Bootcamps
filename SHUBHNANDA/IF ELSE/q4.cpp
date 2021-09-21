#include <iostream>
using namespace std;
int main()
{ int salary,year,bonus;
  cout<<"enter two no."<<endl;
  cin>>salary>>year;
  
  if(year>5)
     {
	 bonus=0.5*salary ;
     cout<<"the bonus is"<<bonus;}
   else
   { bonus=0;
   cout<<"the bonus is "<<bonus;}
  return 0;
}
