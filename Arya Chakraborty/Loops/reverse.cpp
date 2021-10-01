#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    if (n == 0)
        cout << "0" << endl;
    else
    {
        int rev = 0;
        while (n)
        {
            int d = n % 10;
            rev = rev * 10 + d;
            n /= 10;
        }
        cout << rev;
    }
    return 0;
}
