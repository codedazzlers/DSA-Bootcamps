// C program to print all negative elements in array
#include <stdio.h>
#define MAX_SIZE 100 e
int main()
{
    int arr[MAX_SIZE];
    int i, N;
    printf("Enter size of the array : ");
    scanf("%d", &N);
    printf("Enter elements in array : ");
    for(i=0; i<N; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("\nAll negative elements in array are : ");
    for(i=0; i<N; i++)
    {
        if(arr[i] < 0)
        {
            printf("%d\t", arr[i]);
        }
    }
    return 0;
}