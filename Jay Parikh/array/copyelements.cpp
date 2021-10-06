/*Q5.Write a C program to copy all elements
 from an array to another array.Q8*/
#include<iostream>
using namespace std;
int main(){
    int n,a[n],c[n];
    cout<<"Enter the size of array\n";
    cin>>n;
    cout<<"Enter the number\n";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"Copy elements are : ";
    for(int i=0;i<n;i++){
        c[i]=a[i];
        cout<<c[i]<<" ";
    }
    return 0;
}