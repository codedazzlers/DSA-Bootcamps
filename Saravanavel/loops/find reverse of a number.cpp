/*problem statement
   C program to find reverse of a number */


#include<iostream>
using namespace std;

int main()
{
    int num,rem,reverse = 0;

    /* Input a number from user */
    cout<<"Enter any number to find reverse: ";
    cin>>num;

    /* Repeat the till 'num' becomes 0 */
    while(num != 0)
    {
        rem = num % 10;
        reverse = (reverse * 10) + rem;
        num     = num / 10;
    }

    cout<<"Reverse = "<<reverse;

    return 0;
}
