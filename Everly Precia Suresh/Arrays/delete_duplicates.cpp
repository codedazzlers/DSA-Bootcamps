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
    int count;
    for(int i=0;i<n;i++){
        count=1;
        for(int j=i+1;j<n;j++){
            if(ar[i]==ar[j]){
                for(int k=j;k<n-1;k++){
                    ar[k]=ar[k+1];
                    
                }
                n--;
                j--;
            }
        }
    }
    cout<<"After deleting he duplicates the array is : ";
    for(int i=0;i<n;i++){
        cout<<ar[i]<<" ";
    }
    return 0;
}
