#include <iostream>

using namespace std;

int main()
{
    int n,d=0;
    cin>>n;
    if(n==0) cout<<"number of digits = 1"<<endl;
    else{
    while(n){
        n/=10;
        d++;
    }
    cout<<"number of digits = "<<d;}
    return 0;
}
