#include <iostream>
using namespace std;
int main(){
    int arr[100],N,P;
    cout<<"enter size"<<endl;
    cin>>N;
    cout<<"enter array"<<endl;
    for(int i=0;i<=N;i++){
        cin>>arr[i];
    }
    cout<<"enter searching element"<<endl;
    cin>>P;
    
    int flag=0;
    for(int i=0;i<=N;i++){
        if(arr[i]==P){
            flag=1;
            break;
        }
        
    }
    if(flag==1){
        cout<<"found"<<endl;
    }
    else{
        cout<<"no found"<<endl;
    }
}