#include<iostream>
using namespace std;
int main()
{
    int arr1[10], arr2[10];
    int i,size;

    cout<<"enter size of array"<<endl;
    cin>>size;

    cout<<"enter elements: "<<endl;
    for(i=0;i<size;i++){
        cin>>arr1[i];
    }
    
    for(i=0;i<size;i++){
        arr2[i]=arr1[i];

    }
    cout<<"entered elements are  "<<endl;
    for(i=0;i<size;i++){
        cout<<arr1[i]<<endl;       
    }

    cout<<"copied array is :"<<endl;
    for(i=0;i<size;i++){
        cout<<arr2[i]<<endl;       
    }
    return 0;
}