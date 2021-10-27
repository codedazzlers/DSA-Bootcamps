/*program description
    program to convert Octal to Hexadecimal number system */


/*Binary to Hexadecimal conversion table
Decimal	Binary	Hexadecimal
0	      0000	    0
1	      0001	    1
2	      0010	    2
3	      0011	    3
4	      0100	    4
5	      0101	    5
6	      0110	    6
7	      0111	    7
8	      1000	    8
9	      1001	    9
10	      1010	    A
11	      1011	    B
12	      1100	    C
13	      1101	    D
14	      1110	    E
15	      1111	    F
*/


#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    int OCTALVALUES[] = {0, 1, 10, 11, 100, 101, 110, 111};

    long long octal, tempOctal, binary, place;
    char hex[65] = "";
    int rem;

    place = 1;
    binary = 0;

    /* Input octal number from user */
    cout<<"Enter any octal number: ";
    cin>>octal;
    tempOctal = octal;

    /*
     * Octal to binary conversion
     */
    while(tempOctal > 0)
    {
        rem = tempOctal % 10;
        binary = (OCTALVALUES[rem] * place) + binary;
        tempOctal /= 10;

        place *= 1000;
    }

    /*
     * Binary to hexadecimal conversion
     */
    while(binary > 0)
    {
        rem = binary % 10000;
        switch(rem)
        {
            case 0:
                strcat(hex, "0");
                break;
            case 1:
                strcat(hex, "1");
                break;
            case 10:
                strcat(hex, "2");
                break;
            case 11:
                strcat(hex, "3");
                break;
            case 100:
                strcat(hex, "4");
                break;
            case 101:
                strcat(hex, "5");
                break;
            case 110:
                strcat(hex, "6");
                break;
            case 111:
                strcat(hex, "7");
                break;
            case 1000:
                strcat(hex, "8");
                break;
            case 1001:
                strcat(hex, "9");
                break;
            case 1010:
                strcat(hex, "A");
                break;
            case 1011:
                strcat(hex, "B");
                break;
            case 1100:
                strcat(hex, "C");
                break;
            case 1101:
                strcat(hex, "D");
                break;
            case 1110:
                strcat(hex, "E");
                break;
            case 1111:
                strcat(hex, "F");
            break;
        }

        binary /= 10000;
    }

    strrev(hex);

    cout<<"Octal number: "<<octal<<endl;
    cout<<"Hexadecimal number: "<<hex;

    return 0;
}
