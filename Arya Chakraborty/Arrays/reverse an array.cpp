#include <iostream>

using namespace std;

int main()
{
    int n; cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int reverse[n];
    for(int i=0; i<n; i++){
        reverse[i]=arr[n-i-1];
    }
    for(int i=0; i<n; i++){
        cout<<reverse[i]<<" ";
    }
    return 0;
}
