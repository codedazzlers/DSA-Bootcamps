/*problem statement
 print all odd numbers between 1 to n using while loop */

 #include<iostream>
 using namespace std;

 int main(){

     int i,n;
     cout<<"print all odd numbers till :";
     cin>>n;

     for(i=1;i<=n;i+=2){
        cout<<i<<endl;
     }
     return 0;
 }
