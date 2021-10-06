#include<iostream>
using namespace std;
int PrintArray(int arr[], int i, int n)
{

    if(i>=n)
    return 0 ;
    cout<<arr[i]<<" ";
    PrintArray(arr,i+1,n);
    return 0;
}
int main()
{
    int n,i;
    cout<<"Enter your array size:";
    cin>>n;
    int arr[n];
    cout<<"Enter the Array Element:"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Array Element Are:";
    PrintArray(arr,0,n);
}
