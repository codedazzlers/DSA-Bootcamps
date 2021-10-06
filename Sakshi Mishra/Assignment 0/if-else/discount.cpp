#include <iostream>
using namespace std;

int main(){
    int x,a,total_cost,b;
    cout<<"Enter the quantity:-";
    cin>>x;
    a=x*100;
    b=a/10;

    if(a>1000){
        total_cost=a-b;
    }
    else{
        total_cost=a;
    }
    cout<<"The total cost is "<<total_cost;

    return 0;
}