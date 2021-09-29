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
    char s[100];
    cin.getline(s, 100);
    int space = 0;
    for (int i = 0; i < length(s); i++)
    {
        if (s[i] == ' ')
            space++;
    }
    cout << space + 1;
    return 0;
}
