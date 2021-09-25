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
    cout<<"Enter an element to search: ";
    int num;
    cin>>num;
    int i=0;
    for( i=0;i<n;i++){
        if(ar[i]==num){
            cout<<"Element is present at position "<<i+1;
         break;
        }
    }
    if(i==n){
        cout<<"Element is not present";
    }

    return 0;
}