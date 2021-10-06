#include<iostream>
using namespace std;
int main(){
    //array size
    int n;
     
    cout<<"Enter number of elements : ";
    cin>>n;
    int ar[n];
    cout<<"Enter Elements: ";
    int even[n],odd[n];
    for(int i=0;i<n;i++){ //read
        cin>>ar[i];
    }
    cout<<"Array inputted successfully"<<endl;
    int k=0,l=0;
    for(int i=0;i<n;i++){
        if(ar[i]%2==0){
            even[k]=ar[i];
            k++;
        }
        else{
            odd[l]=ar[i];
            l++;
        }
    }
    cout<<"Odd array : ";
    for(int i=0;i<l;i++){
        cout<<odd[i]<<" ";
    }
    cout<<"\nEven array : ";
    for(int i=0;i<k;i++){
        cout<<even[i]<<" ";
    }

    return 0;
}
