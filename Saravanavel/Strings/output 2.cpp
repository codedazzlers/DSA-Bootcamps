/* program description
   Write the output of the following program


#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char name[] = "CoMPutER";
    for (int x = 0; x < strlen(name); x++)
        if (islower(name [x]))
            name [x] = toupper(name[x]);
        else
            if (isupper(name[x]))
                if (x % 2 == 0)
                    name[x] = tolower(name[x]);
                else
                    name[x] = name[x-1];
     cout << name;
     return 0;
}
*/
The output is :cOmmUTee
