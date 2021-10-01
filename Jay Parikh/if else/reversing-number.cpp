#include <iostream>
using namespace std;

int main(){
    int number,a,b,c,d,reversedno;
    cout<<"Enter four digit number";
    cin>>number;
    a=number%10;
    b=(number/10)%10;
    c=(number/100)%10;
    d=(number/1000)%10;
    reversedno=a*1000+b*100+c*10+d;
    cout<<"Reverse No is "<<reversedno;
    


    return 0;
}
