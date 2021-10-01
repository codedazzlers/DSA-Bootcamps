/*Q3.Write a C program to print all even numbers 
between 1 to 100. - using while loop*/
#include <iostream>
using namespace std;

int main(){
    int i,n;
    i=2;
    n=100;
    cout<<"All even numbers between 1 to 100\n";
    while(i<=n){
        cout<<i<<"\n";
        i+=2;
    }
    
    return 0;
}