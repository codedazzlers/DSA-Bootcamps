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
    cout<<"Array inputted successfully"<<endl;
    cout<<"Enter a position to delete: ";
    int pos;
    cin>>pos;
    for(int i=pos-1;i<n-1;i++){
        ar[i]=ar[i+1];
    }
    cout<<"Element deleted"<<endl;
    cout<<"Elements in array are: ";
    for(int i=0;i<n-1;i++){ //print
        cout<<ar[i]<<" ";
    }
    return 0;
}
