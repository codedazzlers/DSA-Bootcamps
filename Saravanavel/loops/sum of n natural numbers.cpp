/*problem statement
 print sum of natural numbers from 1 to n */

 #include<iostream>
 using namespace std;

 int main(){

     int i,n,sum=0;
     cout<<"print sum of even numbers till :";
     cin>>n;

     for(i=1;i<=n;i++){
        sum+=i;
        cout<<i<<endl;
     }
     cout<<"sum of "<<n<<"natural numbers is "<<sum<<endl;

     return 0;
 }
