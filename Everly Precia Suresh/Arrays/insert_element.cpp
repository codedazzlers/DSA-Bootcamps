#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number of elements : ";
    cin>>n;
    int ar[n+1];
    cout<<"Enter Elements: ";

    for(int i=0;i<n;i++){ //read
        cin>>ar[i];
    }
    cout<<"Array inputted successfully"<<endl;
    cout<<"Enter position of insertion : ";
    int pos;
    cin>>pos;
    cout<<"Enter Value : ";
    int num;
    cin>>num;
    for(int i=n; i>=pos;i--){
        ar[i]=ar[i-1];
    }
    ar[pos-1]=num;
    for(int i=0;i<n+1;i++){ //read
        cout<<ar[i]<<" ";
    }
    return 0;
}
