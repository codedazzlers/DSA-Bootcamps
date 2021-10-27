/*problem statement
 print multiplication table */

 #include<iostream>
 using namespace std;

 int main(){

     int i,num=0;
     cout<<"Enter number to print table :";
     cin>>num;

     for(i=1;i<=10;i++){
        cout<<i<<"*"<<num<<"="<<(num*i)<<endl;
     }
     return 0;
 }
