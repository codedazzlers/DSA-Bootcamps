#include <iostream>

using namespace std;

int main()
{
    string str;
    cout << "Enter string to reverse: ";
    getline(cin, str);

    int len;
    for (len = 0; str[len] != '\0'; len++)
        ;

    int i = 0, j = len - 1;
    while (i < j)
    {
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i++;
        j--;
    }

    cout << "Reversed string is " << str;

    return 0;
}