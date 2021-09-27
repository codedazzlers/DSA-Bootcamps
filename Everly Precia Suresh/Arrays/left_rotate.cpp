#include<iostream>
using namespace std;
void left_rotate(int arr[],int n){
  int first=arr[0];
  for(int i=0;i<n-1;i++){
      arr[i]=arr[i+1];
  }
  arr[n-1]=first;
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
    cout<<"Number of times to rotate array : ";
    cin>>d;
    int t=d;
    while(d--){
    left_rotate(ar,n);
    }
    cout<<"Array after left rotation "<<t<<" times: ";
    for(int i=0;i<n;i++){
        cout<<ar[i]<<" ";
    }
    return 0;
}