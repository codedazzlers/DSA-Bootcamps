#include<iostream>
using namespace std;
void right_rotate(int arr[],int n){
   int last=arr[n-1];
   for(int i=n-1;i>=0;i--){
       arr[i]=arr[i-1];
   }
   arr[0]=last;
}
int main(){
    int n;
     
    cout<<"Enter number of elements : ";
    cin>>n;
    int ar[n];
    cout<<"Enter Elements: ";

    for(int i=0;i<n;i++){ //read
        cin>>ar[i];
    }
    cout<<"Array inputted successfully"<<endl;
    int d;
    cout<<"Enter times to right rotate: ";
    cin>>d;
    int t=d;
    while(d--){
        right_rotate(ar,n);
    }
     cout<<"Array after righ rotation "<<t<<" times: ";
    for(int i=0;i<n;i++){
        cout<<ar[i]<<" ";
    }
    return 0;
}
