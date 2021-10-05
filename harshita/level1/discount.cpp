#include <iostream>

using namespace std;

int main()
{
    double quantity,cost=100,amount=0;
    cout << "Enter Quantity : ";
    cin >> quantity ;
    if(quantity > 1000){
        amount=quantity*cost*0.1;
        cout << amount << " cost... yey you got 10 percent discount!";
        
    }

    else
        amount= quantity*cost;
        cout << amount << " cost";
    
}