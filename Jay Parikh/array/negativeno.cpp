/* Q2.Write a C program to print all negative elements in an array.*/
#include<iostream>
using namespace std;
int main(){
    int n,a[n];
    cout<<"Enter the size of array\n";
    cin>>n;
    cout<<"Enter the number\n";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"Negative numbers are\n";
    for(int j=0;j<n;j++){
        if(a[j]<0){
            cout<<a[j]<<" ";
        }
    }
    return 0;
}