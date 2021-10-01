#include <iostream>
using namespace std;
int main() {
    int n;
    int fact = 1;
    cout<<"Enter any natural number"<<endl;
    cin>>n;
    int i;
    for(i=1; i<=n; i++){
        fact = fact*i;
    }
    cout<<fact<<endl;
   return 0;
}
