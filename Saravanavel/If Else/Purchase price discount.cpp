/* problem statement
A shop will give discount of 10% if the cost of purchased quantity is more than 1000.
Ask user for quantity
Suppose, one unit will cost 100.
Judge and print total cost for user. */

#include<iostream>

using namespace std;

int main(){

float discount,cost;
int purchased_quantity,unit;

cout<<"cost of each quantity is 100"<<endl;
cout<<"enter quantity to purchase:"<<endl;
cin>>purchased_quantity;

if (purchased_quantity>1000){
        cost=(purchased_quantity*100)-(0.1*purchased_quantity*100);
        cout<<"Discount=10%"<<endl;
        cout<<"The cost is "<<cost<<endl;}
else
        cost=(purchased_quantity*100);
        cout<<"No Discount"<<endl;
        cout<<"The cost is "<<cost;

 return 0;
}







