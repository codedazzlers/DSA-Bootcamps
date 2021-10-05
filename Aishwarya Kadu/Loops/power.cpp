#include <stdio.h>
 
int main()
{
  int i, Number, Exponent; 
  long Power = 1;
  
  printf("\n Enter Any Number : ");
  scanf(" %d", &Number);

  printf("\n Enter Exponent Value: ");
  scanf(" %d", &Exponent);
    
  for(i = 1; i <= Exponent; i++)
  {
  	Power = Power * Number;
  }
  
  printf("\n The Final result of %d Power %d = %ld", Number, Exponent, Power);
  
  return 0;
}