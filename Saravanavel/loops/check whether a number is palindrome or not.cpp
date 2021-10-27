/*problem statement
    program to check whether a number is palindrome or not*/
#include<iostream>
using namespace std;

int main()
{
    int n,num,rem,rev= 0;

    /* Input a number from user */
    cout<<"Enter any number to find reverse: ";
    cin>>n;

    /* Repeat the till 'num' becomes 0 */
    num=n;
    while(n!= 0)
    {
        rem = n % 10;
        rev = (rev* 10) + rem;
        n  = n/ 10;
    }
 /* Check if reverse is equal to 'num' or not */
    if(rev == num)
    {
        cout<<num<<" is palindrome";
    }
    else
    {
        cout<<num<<" is not palindrome";
    }

    return 0;
}
