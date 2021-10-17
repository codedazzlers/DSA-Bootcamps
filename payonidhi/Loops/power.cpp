#include <iostream>
using namespace std;
int main() {
    int n;
    int pow;
    int ans = 1;
    cout<<"Enter any natural number and power"<<endl;
    cin>>n>>pow;
    int i;
    for(i=1; i<=pow; i++){
        ans = n*ans;
    }
    cout<<ans<<endl;
   return 0;
}
