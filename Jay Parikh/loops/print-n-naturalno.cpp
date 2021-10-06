/* Q1.Write a C program to print all natural numbers from 
1 to n. - using while loop*/
#include <iostream>
using namespace std;

int main(){
    int n,i;
    i=1;
    cout<<"Print all natural numbers from 1 to : ";
    cin>>n;
    while(i<=n){
    cout<<i<<"\n";
    i++;
    }
    return 0;
}