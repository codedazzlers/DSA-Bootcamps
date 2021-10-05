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
    char s[100], s1[100];
    cin.getline(s, 100);
    cin.getline(s1, 100);
    int length1 = length(s), length2 = length(s1), addLen = length1 + length2;
    char s2[addLen];
    for (int i = 0; i < length1; i++)
    {
        s2[i] = s[i];
    }
    for (int i = length1; i < length1 + length2; i++)
    {
        s2[i] = s1[i - length1];
    }
    for (int i = 0; i < addLen; i++)
    {
        cout << s2[i];
    }
    return 0;
}
