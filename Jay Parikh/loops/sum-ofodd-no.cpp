/*Q8.Write a C program to find sum of all
 odd numbers between 1 to n.*/
#include <iostream>
using namespace std;

int main(){
    int i,n,sumof_oddno;
    i=1;
    sumof_oddno=0;
    cout<<"Enter the value of n\n";
    cin>>n;
    cout<<"Sum of all odd no between 1 to "<<n<<"\n";
    while(i<n){
        sumof_oddno+=i;
        i+=2;
    }
    cout<<sumof_oddno;
    return 0;
}