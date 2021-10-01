#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, rev = 0;
    cin >> n;
    while (n)
    {
        int d = n % 10;
        rev = rev * 10 + d;
        n /= 10;
    }
    while (rev)
    {
        int d = rev % 10;
        if (d == 0)
            cout << "zero ";
        else if (d == 1)
            cout << "one ";
        else if (d == 2)
            cout << "two ";
        else if (d == 3)
            cout << "three ";
        else if (d == 4)
            cout << "four ";
        else if (d == 5)
            cout << "five ";
        else if (d == 6)
            cout << "six ";
        else if (d == 7)
            cout << "seven ";
        else if (d == 8)
            cout << "eight ";
        else if (d == 9)
            cout << "nine ";
        rev /= 10;
    }
    return 0;
}
