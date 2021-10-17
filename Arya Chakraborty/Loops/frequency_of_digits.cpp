#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, d0 = 0, d1 = 0, d2 = 0, d3 = 0, d4 = 0, d5 = 0, d6 = 0, d7 = 0, d8 = 0, d9 = 0;
    cin >> n;
    while (n)
    {
        int d = n % 10;
        if (d == 0)
            d0++;
        else if (d == 1)
            d1++;
        else if (d == 2)
            d2++;
        else if (d == 3)
            d3++;
        else if (d == 4)
            d4++;
        else if (d == 5)
            d5++;
        else if (d == 6)
            d6++;
        else if (d == 7)
            d7++;
        else if (d == 8)
            d8++;
        else if (d == 9)
            d9++;
        n /= 10;
    }
    cout << "freuency of 0 = " << d0 << endl;
    cout << "freuency of 1 = " << d1 << endl;
    cout << "freuency of 2 = " << d2 << endl;
    cout << "freuency of 3 = " << d3 << endl;
    cout << "freuency of 4 = " << d4 << endl;
    cout << "freuency of 5 = " << d5 << endl;
    cout << "freuency of 6 = " << d6 << endl;
    cout << "freuency of 7 = " << d7 << endl;
    cout << "freuency of 8 = " << d8 << endl;
    cout << "freuency of 9 = " << d9 << endl;
    return 0;
}
