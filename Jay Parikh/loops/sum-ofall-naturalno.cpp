/*Q6.Write a C program to find sum of all natural numbers
 between 1 to n.*/
#include <iostream>
using namespace std;

int main(){
    int i,n,add;
    i=1;
    add=0;
    cout<<"Enter the value of n";
    cin>>n;
    while(i<=n){
        add+=i;
        i++;
    }
    cout<<add;
    return 0;
}