#include<iostream>
using namespace std;
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

    int reverse[n];
    int k=n-1;
    for(int i=0;i<n;i++){
        reverse[i]=ar[k];
        k--;
    }
    cout<<"Reversed array elements are : ";
    for(int i=0;i<n;i++){
        cout<<reverse[i]<<" ";
    }
    return 0;
}
