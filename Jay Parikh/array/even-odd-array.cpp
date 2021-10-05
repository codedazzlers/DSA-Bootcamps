/*Q7.Write a C program to put even and odd elements
 of array in two separate array.Q17*/
#include <iostream>
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
    cout<<"\nEven elements of array are : ";
    for(int j=0;j<x;j++){
        cout<<b[j]<<" ";
    }
    cout<<"\nodd elements of array are : ";
    for(int d=0;d<y;d++){
        cout<<c[d]<<" ";
    }
    return 0;
}