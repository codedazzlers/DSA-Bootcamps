/*Q3.Write a C program to count total number 
of even and odd elements in an array.Q6*/
#include<iostream>
using namespace std;
int main(){
    int n,a[n],counteven,countodd;
    counteven=0;
    countodd=0;
    cout<<"Enter the size of array\n";
    cin>>n;
    cout<<"Enter the number\n";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int j=0;j<n;j++){
        if(a[j]%2==0){
            counteven++;
        }
        else{
            countodd++;
        }
    }
    cout<<"Total no of even no is "<<counteven<<"\n";
    cout<<"Total no of odd no is  "<<countodd;
    return 0;
}