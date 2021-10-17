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
    cout<<"Enter a string: ";
    cin >> s;
    cout<<"Reverse string is: ";
    for (int j = length(s) - 1; j >= 0; j--)
        cout << s[j];
    return 0;
}