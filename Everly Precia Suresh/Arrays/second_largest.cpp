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
    int max1=0 , max2=0;
    for(int i=0;i<n;i++){
        if(max1<ar[i]){
            max2=max1;
            max1=ar[i];
        }
        else if(ar[i]<max1 && ar[i]>max2){
            max2=ar[i];
        }
    }
    cout<<"The second largest element in array is : "<<max2<<endl;
    return 0;
}
