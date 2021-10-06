/*Q9.Write a C program to print multiplication
 table of any number.*/
#include <iostream>
using namespace std;

int main(){
     int i,n,multiply;
     i=1;
     cout<<"Enter the value of Multiplication Table\n";
     cin>>n;
     while(i<=10){
         multiply=i*n;
         cout<<n<<" X "<<i<<" = "<<multiply<<"\n";
         i++;
     }
    return 0;
}