#include <iostream>
using namespace std;

int main(){
    int x,a,totalcost,b;
    cout<<"Enter the no of quantity u want";
    cin>>x;
    a=x*100;
    b=a/10;

    if(a>1000){
        totalcost=a-b;
    }
    else{
        totalcost=a;
    }
    cout<<"The total cost is "<<totalcost;

    return 0;
}