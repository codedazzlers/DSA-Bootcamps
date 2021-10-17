#include  <stdio.h>
main ()
 {
   int a,b,c;
   printf("\nType the ages of a,b,c:");
   scanf("%d %d %d",&a,&b,&c);
   if ((a>b) && (a>c))
   {
       printf("\nThe oldest is A");
   }
   else
   {
       printf("\nThe youngest is A");
   }
   if ((b>a) && (b>c))
   {
       printf("\nThe oldest is B");
   }
   else
   {
       printf("\nThe youngest is B");
   }
   if ((c>a) && (c>a))
   {
       printf("\nThe oldest is C");
   }
   else
   {
       printf("\nThe youngest is C");
   }
   return 0;
 }