#include <iostream>
using namespace std;
int main(){
    int arr[100],copy[100],N;
    
    cout<<"enter array of 1st array";
    cin>>N;
    for(int i=0;i<=N;i++){
        cin>>arr[i];
    }
    

    //copy element
    for(int i=0;i<=N;i++){
        copy[i]=arr[i];
    }

    cout<<"elements in first arrray : "<<endl;
    for(int i=0; i<=N;i++){
        cout<<arr[i];
    }
    cout<<"elements in copy array : "<<endl;
    for(int i=0; i<=N;i++){
        cout<<copy[i];

    }
}