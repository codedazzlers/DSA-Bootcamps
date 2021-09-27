//print negative elements
#include <iostream>
using namespace std;

int main(){

    int arr[100],n;
    cin>>n;
    for(int i=0;i<=n;i++){
        cin>>arr[i];
    }
    cout<<"arrary looks like this :"<<endl;
    for(int i=0;i<=n;i++){
        if(arr[i]<0){

        cout<<arr[i];
    }
    }
    return 0;
    
}