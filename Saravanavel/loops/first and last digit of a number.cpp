/*problem statement
 find first and last digit of any number*/

/* method 1
#include <iostream>

using namespace std;

int main()
{
    int n,first_digit,last_digit;
    cout<<"Enter any number: ";
    cin>>n;
    if(n==0) cout<<"0 0"<<endl;
    else{
        last_digit=n%10;
        while(n>=10) n/=10;
        first_digit=n;
        cout<<first_digit<<" "<<last_digit;
    }
    return 0;
}
*/

//method 2

 #include<iostream>
 #include<cmath>
 using namespace std;

 int main(){

     int n,last_digit,first_digit,digits;
     cout<<"Enter any number :";
     cin>>n;
     /* Find last digit */
     last_digit=n%10;

    /* Total number of digits - 1 */
     digits=(int)log10(n);

     /* Find first digit */
     first_digit=(int)(n/pow(10,digits));

     cout<<"First Digit= "<<first_digit<<endl;
     cout<<"Last Digit= "<<last_digit<<endl;

     return 0;
 }



