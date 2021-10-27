/* problem statement
find sum of digits of a number */

#include<iostream>
#include<cmath>
 using namespace std;

 int main(){
     int num,sum;

     cout<<"Enter any number :";
     cin>>num;

     while (num!=0){
        /* Find last digit of num and add to sum */
        sum+=num%10;
         /* Remove last digit from num */
         num=num/10;
     }
     cout<<"Sum of Digits : "<<sum<<endl;

     return 0;


     }
