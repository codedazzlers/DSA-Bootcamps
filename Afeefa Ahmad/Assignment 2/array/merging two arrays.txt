#include <iostream>
using namespace std;
int main()
{
    int arr[100],arr2[100],merge[100],i=0;

    cout<<"enter 1st array "<<endl;  // let first array have 3 elements
    for(i=0;i<3;i++)
    {
        cin>>arr[i];
    }

    cout<<"enter 2nd array"<<endl;  // let second array have 3 elements
    for(i=0;i<3;i++)
    {
        cin>>arr2[i];
    }
    for(i=0;i<3;i++)
    {
        merge[i]=arr[i];
        merge[i+3]=arr2[i];
    }
    for(i=0;i<6;i++) //merged array will have 6 elements
    {
        cout<<"merged array is "<< merge[i]<<endl;
    }
    return 0;
}

