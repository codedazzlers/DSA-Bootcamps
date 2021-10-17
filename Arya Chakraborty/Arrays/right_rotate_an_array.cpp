#include <iostream>

using namespace std;

int main()
{
    int n,k; cin>>n>>k;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    //store last k elements
    int arr1[k]={0};
    for(int i=n-k-1;i<=n-1; i++){
        arr1[i-(n-k-1)]=arr[i+1];
    }
    //shift to end
    for(int i=n-1; i>=0; i--){
        arr[i]=arr[i-k];
    }
    //add to first
    for(int i=0; i<k; i++){
        arr[i]=arr1[i];
    }
    //display
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
