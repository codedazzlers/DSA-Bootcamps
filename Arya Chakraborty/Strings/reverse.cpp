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
    string s;
    cin >> s;
    for (int j = length(s) - 1; j >= 0; j--)
        cout << s[j];
    return 0;
}
