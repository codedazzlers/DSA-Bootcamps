/*problem statement
   program to convert Binary to Hexadecimal number system */



/*
Binary to hexadecimal conversion table
Decimal	Binary	Hexadecimal
0	    0000	    0
1	    0001	    1
2	    0010	    2
3	    0011	    3
4	    0100	    4
5	    0101	    5
6	    0110	    6
7	    0111	    7
8	    1000	    8
9	    1001	    9
10	    1010	    A
11	    1011	    B
12	    1100	    C
13	    1101	    D
14	    1110	    E
15	    1111	    F

*/

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
  int hex[1000];
  int i = 1, j = 0, rem, dec = 0, binaryNumber;
	cout << "enter  a binary number  to convert into hexadecimal: ";
	cin>> binaryNumber;
  while (binaryNumber > 0)
  {
   rem = binaryNumber % 2;
   dec = dec + rem * i;
   i = i * 2;
   binaryNumber = binaryNumber / 10;
  }
   i = 0;
  while (dec != 0)
  {
   hex[i] = dec % 16;
   dec = dec / 16;
   i++;
  }
  cout<<" The hexadecimal value: ";
  for (j = i - 1; j >= 0; j--)
  {
   if (hex[j] > 9)
   {
    cout<<(char)(hex[j] + 55)<<"\n";
   }
   else
   {
    cout<<hex[j];
   }
  }
}
