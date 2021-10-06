#include <iostream>

using namespace std;
int length(string s)
{
    int i = 0;
    while (s[i])
    {
        i++;
    }
    return i;
}
int main()
{
    string s, rev = "";
    cin >> s;
    for (int j = length(s) - 1; j >= 0; j--)
        rev += s[j];
    if (rev == s)
        cout << "palindrome";
    else
        cout << "not palindrome";
    return 0;
}
