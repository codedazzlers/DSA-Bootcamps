/* problem statement
find product of digits of a number */

#include<iostream>
#include<cmath>
 using namespace std;

 int main(){
     int num;
     long int product;

     cout<<"Enter any number :";
     cin>>num;
     product=1;

     while (num!=0){
        /* Get the last digit from num and multiplies to product */
         product = product * (num % 10);
         /* Remove last digit from num */
         num=num/10;
     }
     cout<<"Products of Digits : "<<product<<endl;

     return 0;


     }
