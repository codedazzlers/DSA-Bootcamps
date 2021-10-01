#include <iostream>
using namespace std;
int main() {
   float cost, quantity, final_cost;
   cout<<"enter the quantity of purchase"<<endl;;
   cin>>quantity;
   if(quantity>10){
       cost = quantity*100;
       final_cost = cost - (10*cost)/100;  
       cout<<final_cost<<"Rs.";
   }
   else{
       cost = quantity*100;
       cout<<cost<<"Rs.";
   }
   return 0;
}
