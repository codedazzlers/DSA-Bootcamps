/*problem statement
   count total digits in a given integer using loop*/

 #include<iostream>
 using namespace std;

 int main(){

     long int num;
     int count =0;
     cout<<"Enter any number :";
     cin>>num;

     do{
        count++;
        num=num/10;
     }

     while(num !=0);
     cout<<"Total digits:"<<count;

     return 0;
 }
