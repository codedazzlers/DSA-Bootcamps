#include <iostream>
using namespace std;

int main(){

    //array size
    int n;
     
    cout<<"Enter number of elements : ";
    cin>>n;
    int ar[n];
    cout<<"Enter Elements: ";

    for(int i=0;i<n;i++){ //read
        cin>>ar[i];
    }
    cout<<"Array inputted successfully"<<endl;

    cout<<"The Elements in array are : "; //print
    for(int i=0;i<n;i++){
        cout<<ar[i]<<" ";
    }

    return 0;
}
