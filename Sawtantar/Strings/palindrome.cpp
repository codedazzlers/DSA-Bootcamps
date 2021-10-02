#include <iostream>

using namespace std;
int length(string p)
{
    int i = 0;
    while (p[i])
    {
        i++;
    }
    return i;
}
int main()
{
    string p, rev = "";
    cout<<"Enter a value:";
    cin >> p;
    for (int j = length(p) - 1; j >= 0; j--)
        rev += p[j];
        {
    if (rev == p)
        cout << "It is a palindrome";
    else
        cout << "not a palindrome";
        }
    return 0;
}