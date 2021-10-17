/*Q4.Write a C program to print all odd number between 1 to 100.*/
#include <iostream>
using namespace std;

int main(){
    int i,n;
    i=1;
    n=100;
    cout<<"All odd number between 1 to 100\n";
    while(i<=n){
        cout<<i<<"\n";
        i+=2;
    }
    return 0;
}