/*problem statement
   program to print ASCII values of all characters */

#include <iostream>
using namespace std;

int main()
{
    int i;

    /* Print ASCII values from 0 to 255 */
    for(i=0; i<=255; i++)
    {
       cout<<"ASCII value of character "<<char(i)<<" = "<<i<<endl;

    }

    return 0;
}
