#include < stdio.h >  
  
int main()  
{  
    int min, max;  
  
    printf("Enter 2 positive numbers\n");  
    scanf("%d%d", &min, &max);  
  
    printf("Natural numbers between %d and %d are:\n", min, max);  
    while(min <= max)  
    {  
        printf("%d  ", min);  
        min++;  
    }  
  
    printf("\n");  
  
    return 0;  
}  
