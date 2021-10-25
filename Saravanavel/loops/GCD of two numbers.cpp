/*problem statement
  program to find HCF (GCD) of two numbers */

#include <iostream>
using namespace std;

int main()
{
    int i, num1, num2, min, hcf=1;

    /* Input two numbers from user */
    cout<<"Enter any two numbers to find HCF: ";
    cin>>num1>>num2;


    /* Find minimum between two numbers */
    min = (num1<num2) ? num1 : num2;

    for(i=1; i<=min; i++)
    {
        /* If i is factor of both number */
        if(num1%i==0 && num2%i==0)
        {
            hcf = i;
        }
    }

    cout<<"HCF(GCD) of "<<num1<<" and "<<num2<<" is "<<hcf;
    return 0;
}
