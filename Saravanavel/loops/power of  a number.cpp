/**
 * C program to print all factors of a number
 */

#include <stdio.h>

int main()
{
    int i, num;

    /* Input number from user */
    printf("Enter any number to find its factor: ");
    scanf("%d", &num);

    printf("All factors of %d are: \n", num);

    /* Iterate from 1 to num */
    for(i=1; i<=num; i++)
    {
        /*
         * If num is exactly divisible by i
         * Then i is a factor of num
         */
        if(num % i == 0)
        {
            printf("%d, ",i);
        }
    }

    return 0;
}

