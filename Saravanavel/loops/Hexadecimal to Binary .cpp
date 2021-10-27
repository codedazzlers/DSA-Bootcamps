/*problem description
     program to convert Hexadecimal to Binary number system */
/*
Hexadecimal to binary conversion table
Decimal	Binary	Hexadecimal
0	     0000	0
1	     0001	1
2	     0010	2
3	     0011	3
4	     0100	4
5	     0101	5
6	     0110	6
7	     0111	7
8	     1000	8
9	     1001	9
10	     1010	A
11	     1011	B
12	     1100	C
13	     1101	D
14	     110	E
15	     1111	F
*/
#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char hex[17], bin[65] = "";
    int i = 0;

    /* Input hexadecimal number from user */
    cout<<"Enter any hexadecimal number: ";
    cin>>hex;

    /* Extract first digit and find binary of each hex digit */
    for(i=0; hex[i]!='\0'; i++)
    {
        switch(hex[i])
        {
            case '0':
                strcat(bin, "0000");
                break;
            case '1':
                strcat(bin, "0001");
                break;
            case '2':
                strcat(bin, "0010");
                break;
            case '3':
                strcat(bin, "0011");
                break;
            case '4':
                strcat(bin, "0100");
                break;
            case '5':
                strcat(bin, "0101");
                break;
            case '6':
                strcat(bin, "0110");
                break;
            case '7':
                strcat(bin, "0111");
                break;
            case '8':
                strcat(bin, "1000");
                break;
            case '9':
                strcat(bin, "1001");
                break;
            case 'a':
            case 'A':
                strcat(bin, "1010");
                break;
            case 'b':
            case 'B':
                strcat(bin, "1011");
                break;
            case 'c':
            case 'C':
                strcat(bin, "1100");
                break;
            case 'd':
            case 'D':
                strcat(bin, "1101");
                break;
            case 'e':
            case 'E':
                strcat(bin, "1110");
                break;
            case 'f':
            case 'F':
                strcat(bin, "1111");
                break;
            default:
                printf("Invalid hexadecimal input.");
        }
    }

    cout<<"Hexademial number = "<<hex<<endl;
    cout<<"Binary number = "<<bin;

    return 0;
}
