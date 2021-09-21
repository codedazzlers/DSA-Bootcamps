#include <iostream>
using namespace std;
int main(){
    int n,r=0,sum=0;
    cout<<"Enter a number : ";
    cin>>n;
    while(n!=0){
        r=n%10;
        n=n/10;
        sum+=r;
    }
    cout<<"The Sum of digits in this number : "<<sum<<endl;
    return 0;
}