#include <iostream>
#include<cmath>
using namespace std;
int main() {
    int x;
    cout<<"Enter any integer"<<endl;
    cin>>x;
    if(x>0){
        cout<<x;
    }
    else
    cout<<abs(x)<<endl;
    return 0;
}
