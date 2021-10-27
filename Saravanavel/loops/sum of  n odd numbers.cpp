/*problem statement
 print sum of odd numbers from 1 to n */

 #include<iostream>
 using namespace std;

 int main(){

     int i,n,sum=0;
     cout<<"print sum of odd numbers till :";
     cin>>n;

     for(i=1;i<=n;i+=2){

           sum+=i;
           cout<<i<<endl;}
     cout<<"sum of first "<<n<<" natural numbers is "<<sum<<endl;

     return 0;
 }


