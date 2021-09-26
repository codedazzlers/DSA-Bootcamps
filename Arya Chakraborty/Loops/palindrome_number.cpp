#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    if (n == 0)
        cout << "yes" << endl;
    else
    {
        int copy = n;
        int rev = 0;
        while (n)
        {
            int d = n % 10;
            rev = rev * 10 + d;
            n /= 10;
        }
        if (rev == copy)
            cout << "yes";
        else
            cout << "no";
    }
    return 0;
}
