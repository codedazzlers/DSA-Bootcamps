
#include<iostream>
using namespace std;
int main()
{
    cout<<"Enter quantities purchased : ";
    int n;
    cin>>n;
    int original_quantity=n*100;
    int new_quantity=0;
    int ans=0;
    if(original_quantity>1000){
        new_quantity=(original_quantity*10)/100;
        ans=original_quantity-new_quantity;
        cout<<"You got a 10% discount!"<<endl;
        cout<<"Your total is "<<ans<<endl;
    }
    else{
       
        cout<<"Your total is(No Discount :) "<<original_quantity<<endl;
    }
    return 0;
}