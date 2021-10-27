/*problem statement
 find the sum of first and last digit of any number*/

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
        cout<<first_digit+last_digit;
    }
    return 0;
}
