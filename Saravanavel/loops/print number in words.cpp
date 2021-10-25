/*problem statement
    program to print number in words*/
#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int n, num = 0, digits;

    /* Input number from user */
    cout<<"Enter any number to print in words: ";
    cin>>n;


    /* Find total digits in n */
    digits = (int) log10(n);

    /* Store reverse of n in num */
    while(n != 0)
    {
        num = (num * 10) + (n % 10);
        n /= 10;
    }

    /* Find total trailing zeros */
    digits =  digits - ((int) log10(num));

    /*
     * Extract last digit of number and print corresponding number in words
     * till num becomes 0
     */
    while(num != 0)
    {
        switch(num % 10)
        {
            case 0:
                cout<<"Zero ";
                break;
            case 1:
                printf("One ");
                break;
            case 2:
                cout<<"Two ";
                break;
            case 3:
                cout<<"Three ";
                break;
            case 4:
                cout<<"Four ";
                break;
            case 5:
                cout<<"Five ";
                break;
            case 6:
                cout<<"Six ";
                break;
            case 7:
                cout<<"Seven ";
                break;
            case 8:
                cout<<"Eight ";
                break;
            case 9:
               cout<<"Nine ";
                break;
        }

        num /= 10;
    }

    /* Print all trailing zeros */
    while(digits)
    {
        cout<<"Zero ";
        digits--;
    }

    return 0;
}
