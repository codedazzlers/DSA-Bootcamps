/*Q9.Write a C program to sort even and odd 
elements of array separately.Q20.*/
#include<iostream>
using namespace std;
int main(){
    int n,z,y,x,a[z],b[z];
    int c[z];
    z=100;
    x=0;
    y=0;
    cout<<"Enter the size of an array\n";
    cin>>n;
    cout<<"Enter the elements of an array\n";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int j=0;j<n;j++){
        if(a[j]%2==0){
            b[x]=a[j];
            x++;
        }
        else{
            c[y]=a[j];
            y++;
        }
    }
    for(int i=0;i<x;i++){
        cout<<b[i]<<" ";
    }
    for(int i=0;i<y;i++){
        cout<<c[i]<<" ";
    }
    return 0;
}