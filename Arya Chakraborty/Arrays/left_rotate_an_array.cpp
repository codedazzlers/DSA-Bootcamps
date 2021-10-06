#include <iostream>

using namespace std;

int main()
{
    int n,k; cin>>n>>k;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    //store first k elements
    int arr1[k]={0};
    for(int i=0;i<k; i++){
        arr1[i]=arr[i];
    }
    //shift to beginning
    for(int i=0; i<n; i++){
        arr[i]=arr[(i+k)];
    }
    //add to last
    for(int i=n-k; i<n; i++){
        arr[i]=arr1[i-(n-k)];
    }
    //display
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
