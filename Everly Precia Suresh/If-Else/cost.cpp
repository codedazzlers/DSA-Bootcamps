#include<iostream>
using namespace std;
int main(){
    cout<<"Enter quantities purchased : ";
    int p;
    cin>>p;
    int original_total=p*100;
    int new_total=0;
    int ans=0;
    if(original_total>1000){
        new_total=(original_total*10)/100;
        ans=original_total-new_total;
        cout<<"You got a 10% discount!"<<endl;
        cout<<"Your total is "<<ans<<endl;
    }
    else{
        cout<<"You didn't get a discount"<<endl;
        cout<<"Your total is "<<original_total<<endl;
    }
    return 0;
}