#include <iostream>

using namespace std;

int main()
{
    char s[100];
    cout<<"Enter a String In Uppercase: ";
    cin.getline(s, 100);
    for (int i = 0; s[i] != '\0'; i++)
    {
        s[i] = (s[i] >= 'A' && s[i] <= 'Z') ? (s[i] + 32) : s[i];
    }
    cout<<"Lowercase String: " << s;
    return 0;
}