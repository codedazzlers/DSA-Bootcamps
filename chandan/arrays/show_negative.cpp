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
    int count=0;
    for(int i=0;i<=N;i++){
        if(arr[i]<0){
            count++;
        }
    }
    cout<<"total negative no. in array : "<<count;
}