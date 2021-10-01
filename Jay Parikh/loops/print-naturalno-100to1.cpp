/*Q5.Write a C program to print all natural numbers in reverse 
(from n to 1). - using while loop*/
#include <iostream>
using namespace std;

int main(){
    int i,n;
    i=100;
    n=1;
    cout<<"All natural numbers in reverse (from n to 1)\n";
    while(i>=n){
        cout<<i<<"\n";
        i--;
    }
    return 0;
}