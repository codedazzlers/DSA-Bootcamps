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

    cout<<"The Negative elements in  the array are : "; //print
    for(int i=0;i<n;i++){
        if(ar[i]<0)
        cout<<ar[i]<<" ";
    }
    return 0;
}
