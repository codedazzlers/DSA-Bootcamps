#include <iostream>
using namespace std;
int main() {
    int n;
    int m;
    int sum  = 0;
    cout<<"Enter any natural number"<<endl;
    cin>>n;
    int i;
    while(n>0){
        m = n%10;
        sum+=m;
        n = n/10;
    }
    cout<<sum<<endl;
   return 0;
}
