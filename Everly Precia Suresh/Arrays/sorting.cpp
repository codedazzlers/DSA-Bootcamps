#include <iostream>
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
    int temp;
    cout<<"Array inputted successfully"<<endl;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(ar[i]>ar[j]){
                temp=ar[i];
                ar[i]=ar[j];
                ar[j]=temp;
            }

        }
    }
    cout<<"Array Sorted in ascending order: ";
    for(int i=0;i<n;i++){
        cout<<ar[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(ar[i]<ar[j]){
                temp=ar[i];
                ar[i]=ar[j];
                ar[j]=temp;
            }

        }
    }
    cout<<"Array Sorted in descending order: ";
    for(int i=0;i<n;i++){
        cout<<ar[i]<<" ";
    }
    return 0;
}
