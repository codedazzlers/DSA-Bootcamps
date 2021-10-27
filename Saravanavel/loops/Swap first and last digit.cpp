/* problem statement
 swap first and last digit of a number */

#include<iostream>
#include<cmath>
 using namespace std;

 int main(){
     int num,swapped_num;
     int last_digit,first_digit,digits;
     cout<<"Enter any number :";
     cin>>num;
     /* Find last digit */
     last_digit=num%10;

    /* Total number of digits - 1 */
     digits=(int)log10(num);

     /* Find first digit */
     first_digit=(int)(num/pow(10,digits));

    swapped_num  = last_digit;
    swapped_num *= (int) round(pow(10, digits));
    swapped_num += num % ((int)round(pow(10, digits)));
    swapped_num -= last_digit;
    swapped_num += first_digit;

    cout<<"original number = "<<num<<endl;
    cout<<"Number after swapping first and last digit: "<<swapped_num;

    return 0;

 }

