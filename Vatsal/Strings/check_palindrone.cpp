#include <iostream>

using namespace std;

int main()
{
    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    int len;
    for (len = 0; str[len] != '\0'; len++)
        ;
    int i = 0, j = len - 1;
    bool isNotPalindrome = false;
    while (i < j)
    {
        if (str[i++] == str[j--])
        {
            isNotPalindrome = true;
            break;
        }
    }

    if (!isNotPalindrome)
        cout << "It is palindrome" << endl;
    else
        cout << "It is not palindrome" << endl;
    return 0;
}