#include <iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter Quantity= ";
    cin>>x;
    if((x*100)>1000){
        cout<<"Your original total is= "<<(x*100)<<endl;
        cout << "You get a discount of " << (x * 10) << " and your new total cost is " << ((x * 100) - ( x * 10));
    }
    else{ 
        cout<<"You did'nt get the discount"<<endl;
        cout<<"Your total is= "<<(x*100);
    }
    return 0;
}