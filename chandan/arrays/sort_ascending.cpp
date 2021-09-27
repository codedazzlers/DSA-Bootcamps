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

    for(int i=0;i<=N;i++){
        for(int j=i+1;j<N;j++){
            if(arr[i]>arr[j]){
                P=arr[i];
                arr[i]=arr[j];
                arr[j]=P;

            }
        }
    }
    cout<<"elements are : "<< endl;
    for(int i=0;i<=N;i++){
        cout<<arr[i];
    }

return 0;
}