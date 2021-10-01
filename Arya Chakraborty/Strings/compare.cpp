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
    char s1[100], s2[100];
    cin.getline(s1, 100);
    cin.getline(s2, 100);
    int i;
    for (i = 0; ((s1[i] == s2[i]) && (s1[i] != '\0') && (s2[i] != '\0')); i++)
        ;
    if (s1[i] - s2[i] == 0)
        cout << "equal";
    else
        cout << "not equal";
}
