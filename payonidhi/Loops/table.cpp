#include <iostream>
using namespace std;
int main() {
    int n;
    cout<<"Enter any natural number"<<endl;
    cin>>n;
    int i;
    for(i=1; i<=10; i++){
        cout<<n<<" x "<<i<<" = "<<n*i<<endl;
    }
   return 0;
}
