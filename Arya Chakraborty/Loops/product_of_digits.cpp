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
        int p = 1;
        while (n)
        {
            int d = n % 10;
            p *= d;
            n /= 10;
        }
        cout << p;
    }
    return 0;
}
