#include <iostream>
using namespace std;
int main(){
    int n,x,i,f=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"Enter element to search:"<<endl;
    cin>>x;
    for(i=0;i<n;i++){
        if(a[i]==x){
            cout<<"Element "<<a[i]<<" found at index "<<i<<endl;
            f=1;
        }
    }
    if(i==n and f==0){
        cout<<"Element not found";
    }
}
