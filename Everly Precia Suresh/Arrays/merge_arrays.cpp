#include <iostream>
using namespace std;
int main(){
    int n;
     
    cout<<"Enter number of elements for 1st array: ";
    cin>>n;
    int ar[n];
    cout<<"Enter Elements for 1st array: ";

    for(int i=0;i<n;i++){ //read
        cin>>ar[i];
    }
    cout<<"Array 1 inputted successfully"<<endl;

    int m;
    cout<<"Enter number of elements for 2nd array: ";
    cin>>m;
    int ar2[m];
    cout<<"Enter Elements for 2nd array: ";

    for(int i=0;i<m;i++){ //read
        cin>>ar2[i];
    }
    cout<<"Array 2 inputted successfully"<<endl;
    int merged[n+m];
    for(int i=0;i<n;i++){
        merged[i]=ar[i];
    }
    int k=n;
    for(int i=0;i<m;i++){
        merged[k]=ar2[i];
        k++;
    }
    cout<<"The elements in the merged array is : ";
    for(int i=0;i<n+m;i++){
        cout<<merged[i]<<" ";
    }
    return 0;
}
