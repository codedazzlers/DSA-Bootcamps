#include <iostream>
using namespace std;
int main() {
    int n;
    int a = -1, b = 1;
    int term;
    cout<<"Enter any natural number"<<endl;
    cin>>n;
    int i;
    for(i=1; i<=n; i++){
        term = a+b;
        cout<<term<<"\t";
        a = b;
        b = term;
    }

   return 0;
}
