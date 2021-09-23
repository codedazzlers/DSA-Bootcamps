#include <iostream>
using namespace std;
int main(){
    int n,r=0,product=1;
    cout<<"Enter a number : ";
    cin>>n;
    while(n!=0){
        r=n%10;
        n=n/10;
        product*=r;
    }
    cout<<"The product of the digits in this number : "<<product<<endl;
    return 0;
}