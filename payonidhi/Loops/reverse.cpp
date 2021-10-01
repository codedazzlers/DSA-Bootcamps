#include <iostream>
using namespace std;
int main() {
    int n;
    int m;
    int digit  = 0;
    cout<<"Enter any natural number"<<endl;
    cin>>n;
    int i;
    while(n>0){
        m = n%10;
        n = n/10;
        digit = digit*10 + m;
    }
    cout<<digit<<endl;
   return 0;
}
