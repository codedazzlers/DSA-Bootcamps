#include <iostream>
using namespace std;
int main(){
    int num1, num2, min, hcf=1;
    cout<<"Enter first number= ";
    cin>>num1;
    cout << "Enter second number= ";
    cin>>num2;
    min=(num1<num2)? num1: num2;
    for(int i=1;i<=min;i++){
        hcf=i;
    }
    cout<<"HCF of given number is= "<<hcf<<endl;
    return 0;
}