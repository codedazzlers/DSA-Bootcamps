#include <iostream>
#include <math.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    int last=n%10;
    int digits=log10(n);
    int first=n/pow(10,digits);

    //swapping
    int swap=last*pow(10,digits);
    swap=swap+(n %(int) pow(10,digits));
    swap=swap-last;
    swap=swap+first;
    cout<<swap<<endl;
    return 0;
}