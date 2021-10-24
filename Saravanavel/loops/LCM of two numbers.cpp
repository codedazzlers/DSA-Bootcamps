/*problem statement
  program to find LCM of two numbers */


#include <iostream>
using namespace std;

int main()
{
    int i, num1, num2, max, lcm=1;

    /* Input two numbers from user */
    cout<<"Enter any two numbers to find LCM: ";
    cin>>num1>>num2;


    /* Find maximum between num1 and num2 */
    max = (num1 > num2) ? num1 : num2;

    /* First multiple to be checked */
    i = max;

    /* Run loop indefinitely till LCM is found */
    while(1)
    {
        if(i%num1==0 && i%num2==0)
        {
            /*
             * If 'i' divides both 'num1' and 'num2'
             * then 'i' is the LCM.
             */
            lcm = i;

            /* Terminate the loop after LCM is found */
            break;
        }

        /*
         * If LCM is not found then generate next
         * multiple of max between both numbers
         */
        i += max;
    }

    cout<<"LCM of "<<num1<<" and "<<num2<<" is "<<lcm;

    return 0;
}
