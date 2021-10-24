/*program description
    program to convert Decimal to Binary number system */

#include <iostream>
using namespace std;
int main()
{
    int a[10], number, i, j;
    cout<<"Enter the Number You want to Convert: ";
    cin>>number;

    for(i = 0; number > 0; i++)
    {
        a[i] = number % 2;
        number = number / 2;
    }

    cout<<"Binary Number of a Given Number =  ";
    for(j = i - 1; j >= 0; j--)  {
        cout<<a[j];
    }
    cout<<"\n";
    return 0;
}
