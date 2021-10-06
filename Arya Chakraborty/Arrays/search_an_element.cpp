#include <iostream>

using namespace std;

int main()
{
    int n,pos=-1;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++) cin>>arr[i];
    int target; cin>>target;
    for(int i=0; i<n; i++){
        if(arr[i]==target) pos=i+1;
    }
    if(pos!=-1)
    cout<<"found at, "<<pos<<"th position";
    else cout<<"not found";
    return 0;
}