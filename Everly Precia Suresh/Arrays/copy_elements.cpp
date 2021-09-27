#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number of elements : ";
    cin>>n;
    int ar[n],ar2[n];
    cout<<"Enter Elements: ";

    for(int i=0;i<n;i++){ //read
        cin>>ar[i];
    }
    cout<<"Array inputted successfully"<<endl;
    
    for(int i=0;i<n;i++){ //copy
      ar2[i]=ar[i];
    }

    cout<<"Elements copied successfully"<<endl;
    cout<<"Elements in second array is : ";
    for(int i=0;i<n;i++){ //print
        cout<<ar2[i]<<" ";
    }
    return 0;
}
