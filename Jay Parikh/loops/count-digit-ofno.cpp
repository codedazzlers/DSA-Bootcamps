/*Q10.Write a C program to count number
 of digits in a number.*/
#include <iostream>
using namespace std;

int main(){
    int i,n;
    i=0;
    cout<<"Enter the number\n";
    cin>>n;
    while(n!=0){
        n/=10;
        i++;
    }
    cout<<i;
    return 0;
}