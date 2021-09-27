#include <iostream>
using namespace std;
int main(){
    int arr[100],N;
    int max1,max2;
    cout<<"enter array";
    cin>>N;
    for(int i=0;i<=N;i++){
        cin>>arr[i];
    }

    max1=max2=0;


    for(int i=0;i<=N;i++){
        if(arr[i]>max1){
            max2=max1;
            max1=arr[i];

        }
        else if(arr[i]>max2 && arr[i]<max1){
            max2=arr[i];
        }

    }
    cout<<"second largest element : "<<max2;
    return 0;
}