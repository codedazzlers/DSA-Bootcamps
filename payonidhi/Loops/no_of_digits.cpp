#include <iostream>
using namespace std;
int main() {
    int n;
    int m;
    int count  = 0;
    cout<<"Enter any natural number"<<endl;
    cin>>n;
    int i;
    while(n>0){
        m = n%10;
        n = n/10;
        count++;
    }
    cout<<count<<endl;
   return 0;
}
