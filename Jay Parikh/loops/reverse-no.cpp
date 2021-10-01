/*Q11.Write a C program to enter a number 
and print its reverse.*/
#include <iostream>
using namespace std;

int main(){
    int i,n;
    i=0;
    int a[100];
    cout<<"Enter the number\n";
    cin>>n;
    while(n!=0){
        a[i]=n%10;
        n/=10;
        i++;
    }
    for(int j=0;j<i;j++){
        cout<<a[j];
    }
    
    return 0;
}