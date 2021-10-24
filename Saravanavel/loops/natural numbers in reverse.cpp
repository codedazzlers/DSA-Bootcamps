/* problem statement
print natural numbers in reverse from n to 1 using while loop*/

#include<iostream>

using namespace std;
int main(){
    int n;
    cout<<"enter the range to print natural numbers in reverse:";
    cin>>n;

     while(n>=1){
        cout<<"\n"<<n;
        n--;
     }
     return 0;
}

