#include <iostream>
using namespace std;
int main(){
    int arr[100],N;
    
    cout<<"enter size of array";
    cin>>N;
    cout<<"enter array : ";
    for(int i=0;i<=N;i++){
        cin>>arr[i];
    }
    cout<<"reverse array: "<<endl;
    for(int i=N-1;i>=0;i--){
        cout<<arr[i];
    }
    return 0;
}
