#include <iostream>
using namespace std;

int main(){
     int salary,year,netbonus,a;
    cout<<"Enter your salary first and then year of service";
    cin>>salary>>year;
    a=salary/5;
    if(year>5){
        netbonus=a;
    }
    else{
        netbonus=0;
    }
    cout<<"The net bonus amount is "<<netbonus;
    return 0;
}