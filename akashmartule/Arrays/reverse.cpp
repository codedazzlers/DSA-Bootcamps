#include<iostream>
using namespace std;
int main()
{
    int arr[50];
    int size,i;

     cout<<"size of array: ";
     cin>>size;
     
    cout<<"enter elements in array:  "<<" ";
    for(i=0;i<size;i++){
       cin>>arr[i];
    }

    
    cout<<"array in reverse order: "<<" ";
    for(i=size-1;i>=0;i--){
        cout<<arr[i];
    }
    return 0;
}