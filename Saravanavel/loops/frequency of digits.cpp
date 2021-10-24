/*problem statement
    program to count frequency of digits in an integer*/
#include<iostream>
using namespace std;

int main()
{
    long long num, n;
    int i, lastDigit,BASE=10;
    int freq[BASE];

    /* Input number from user */
    cout<<"Enter any number: ";
    cin>>num;

    /* Initialize frequency array with 0 */
    for(i=0; i<BASE; i++)
    {
        freq[i] = 0;
    }

    /* Copy the value of 'num' to 'n' */
    n = num;

    /* Run till 'n' is not equal to zero */
    while(n != 0)
    {
        /* Get last digit */
        lastDigit = n % 10;

        /* Remove last digit */
        n /= 10;

        /* Increment frequency array */
        freq[lastDigit]++;
    }

    /* Print frequency of each digit */
    //printf("Frequency of each digit in %lld is: \n", num);
   cout<<"Frequency of each digit in  "<<num <<"  is"<<endl;
    for(i=0; i<BASE; i++)
    {
        //printf("Frequency of %d = %d\n", i, freq[i]);
        cout<<"Frequency of "<<i<<" is "<<freq[i]<<endl;
    }

    return 0;
}
