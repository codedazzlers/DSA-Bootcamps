/*problem statement
 print all even numbers between 1 to n using while loop */

 #include<iostream>
 using namespace std;

 int main(){

     int i,n;
     cout<<"print all even numbers till :";
     cin>>n;
     i=1;
     while(i<=n){
        if(i%2==0)
        {
            cout<<"\n"<<i;
        }
        i++;
     }
return 0;
 }
