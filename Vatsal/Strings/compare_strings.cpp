#include <iostream>
using namespace std;

int main()
{
    string str1, str2;

    cout << "Enter first string: ";
    getline(cin, str1);

    cout << "Enter second string: ";
    getline(cin, str2);
    int i;
    for (i = 0; str1[i] == str2[i] && str1[i] != '\0' && str2[i] != '\0'; i++)
        ;

    if (str1[i] - str2[i] == 0)
        cout << "Strings are equal";
    else
        cout << "Strings are not equal";

    return 0;
}
