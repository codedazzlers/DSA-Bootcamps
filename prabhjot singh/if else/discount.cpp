#include<iostream>
using namespace std;
int main()
{  int qty,cost,d;
 cout<<"enter no. of units you want to purchase :";
 cin>>qty;
 cost=100*qty;           //let cost of one unit is Rs.100.
 if(cost>1000)           //customer will get discount of 10% if purchase cost more than Rs.1000.
 {d=0.1*cost;
  cout<<"you will get discount of Rs."<<d;
 }
 else
 cout<<"you are not eligible for discount";
 cout<<"\nyour parchased cost is Rs."<<cost;
    return 0;

}