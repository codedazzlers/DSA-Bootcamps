#include<stdio.h>
 
int main()
{
    int f1=0,f2=1,f3,i=3,len;
    printf("enter length of the  fibonacci series:");
    scanf("%d",&len);
    printf("%d\t%d",f1,f2); 
    while(i<=len)           
    {
        f3=f1+f2;               
        printf("\t%d",f3);      
        f1=f2;
        f2=f3;
        i=i+1;                 
    }
    return 0;
}
