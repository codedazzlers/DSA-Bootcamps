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
    int count=0;
    for(int i=0;i<n;i++){
      if(ar[i]<0)
      count++;
    }
    cout<<"The total number of negative elements in the array : "<<count<<endl;
    return 0;
}
