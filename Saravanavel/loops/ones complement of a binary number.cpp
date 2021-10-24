/*problem statement
  program to find ones complement of a binary number */

/* What is Ones complement?
Ones complement of a binary number is defined as value obtained by inverting all binary bits. It is the result of
swapping all 1s to 0s and all 0s to 1s. */
#include <iostream>
using namespace std;



int main()
{
    int SIZE=8;
    char binary[SIZE + 1], onesComp[SIZE + 1];
    int i, error=0;

    cout<<"Enter bit binary value: ";
    cin>>binary;


    /* Store all inverted bits of binary value to onesComp */
    for(i=0; i<SIZE; i++)
    {
        if(binary[i] == '1')
        {
            onesComp[i] = '0';
        }
        else if(binary[i] == '0')
        {
            onesComp[i] = '1';
        }
        else
        {
            printf("Invalid Input");
            error = 1;

            /* Exits from loop */
            break;
        }
    }

    /* Marks the end of onesComp string */
    onesComp[SIZE] = '\0';

    /* Check if there are binary string contains no error */
    if(error == 0)
    {
        cout<<"Original binary = "<<binary<<endl;
        cout<<"Ones complement = "<<onesComp;
    }

    return 0;
}
