#include <iostream>
using namespace std;
int main() {
    int n;
    cout<<"Enter any natural number"<<endl;
    cin>>n;
    int sum = 0;
    int i;
    for(i=1; i<=n; i++){
        if(i%2==0){
            sum+=i;
        }
    }
    cout<<sum;
   return 0;
}
