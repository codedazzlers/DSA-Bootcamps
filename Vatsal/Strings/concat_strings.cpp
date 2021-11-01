#include <iostream>

using namespace std;

int main()
{
    string str1, str2;
    cout << "Enter string 1: ";
    getline(cin, str1);
    cout << "Enter string 2: ";
    getline(cin, str2);
    char newstr[1000];
    int k = 0;
    for (int i = 0; str1[i] != '\0'; i++, k++)
        newstr[k] = str1[i];
    for (int i = 0; str2[i] != '\0'; i++, k++)
        newstr[k] = str2[i];
    newstr[k] = '\0';

    cout << "String after concatenation is " << newstr;
    return 0;
}