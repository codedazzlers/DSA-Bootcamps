#include <iostream>
using namespace std;
int main(){
    cout<<"Enter a number : ";
    int n,f=0;
    cin>>n;
    int l=n%10;
    while(n!=0){
        f=n%10;
        n=n/10;
    }
    cout<<"The Sum of First Digit and Last Digit is "<<l+f<<endl;
    
    return 0;
}