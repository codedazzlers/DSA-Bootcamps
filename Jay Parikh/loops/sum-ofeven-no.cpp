/*Q7.Write a C program to find sum of all 
even numbers between 1 to n.*/
#include <iostream>
using namespace std;

int main(){
     int i,n,sumof_evenno;
    i=2;
    sumof_evenno=0;
    cout<<"Enter the value of n\n";
    cin>>n;
    cout<<"Sum of all even no between 1 to "<<n<<"\n";
    while(i<n){
        sumof_evenno+=i;
        i+=2;
    }
    cout<<sumof_evenno;
    return 0;
}