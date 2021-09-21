#include <iostream>
using namespace std;
int main()
{ int cost,quantity;
  cout<<"enter two no."<<endl;
  cin>>cost>>quantity;
  cost=cost*quantity;
  if(cost>1000)
     {
	 cost=cost-0.1*cost;
     cout<<"the total cost is"<<cost;}
   else
   {
   
   cout<<"the total cost is "<<cost;}
  return 0;
}
