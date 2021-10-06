/*Q4.Write a C program to count total number of
 negative elements in an array.Q7*/
#include<iostream>
using namespace std;
int main(){
    int n,a[n],count;
    count=0;
    cout<<"Enter the size of array\n";
    cin>>n;
    cout<<"Enter the number\n";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"Total Negative numbers are\n";
    for(int j=0;j<n;j++){
        if(a[j]<0){
           count++; 
        }
    }
    cout<<count;
    return 0;
}