#include <iostream>
using namespace std;
int main() {
    int n;
    int flag;
    cout<<"Enter any natural number"<<endl;
    cin>>n;
    int i;
    for(i=2; i<n; i++){
        if(n%i==0){
            flag = 0;
            break;
        }  
    }
    if(flag!=0){
    cout<<"Prime number"<<endl;
    }
    else
    cout<<"not prime!"<<endl;
   return 0;
}
