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
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=ar[i];
    }
    cout<<"Sum of the array is : "<<sum<<endl;
    return 0;
}
