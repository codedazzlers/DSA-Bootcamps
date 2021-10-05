/* Q1.Write a C program to read and print 
elements of array. - using recursion.*/
#include<iostream>
using namespace std;
void print(int arr[],int start,int n );
int main(){
    int n,arr[n];
    cout<<"Enter the size of array";
    cin>>n;
    cout<<"Enter the elements u want to store";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Elements of the array";
    print(arr,0,n);
    return 0;
}
void print(int arr[],int start,int n ){
    if(start>=n){
        return;
    }
    cout<<arr[start]<<" ";

    print(arr,start + 1,n);
    
}
