/*problem statement
 print all natural numbers from 1 to n using while loop */

 #include<iostream>
 using namespace std;

 int main(){

     int i,n;
     cout<<"enter the range to print natural numbers:";
     cin>>n;
     i=1;
     while(i<=n){
        cout<<"\n"<<i;
        i++;
     }
     return 0;
 }
