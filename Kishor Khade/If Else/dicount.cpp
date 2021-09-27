//A shop will give discount of 10% if the cost of purchased quantity is more than 1000.
//Ask user for quantity
//Suppose, one unit will cost 100.
//Judge and print total cost for user.

#include<iostream>
using namespace std;
int main(){
	int quantity,cost=100;
	cout<<"Enter quantity : ";
	cin>>quantity;
	if (quantity*cost > 1000)
	cout<<"congrats! you got a discount of Rs."<<quantity*cost/10;
	else
	cout<<"No discount.";
}
