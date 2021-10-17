#include <bits/stdc++.h>
using namespace std;
int no_digits(int n)
{
    int c = 0;
    while (n)
    {
        c++;
        n /= 10;
    }
    return c;
}
int isArmstrong(int n)
{
    int copy = n, s = 0;
    while (n)
    {
        int d = n % 10;
        s += pow(d, no_digits(copy));
        n /= 10;
    }
    if (s == copy)
        return 1;
    else
        return 0;
}
int main()
{
    int n;
    cin >> n;
    if (n > 0)
    {
        for (int i = 1; i <= n; i++)
        {
            if ((isArmstrong(i) == 1))
                cout << i << " ";
        }
    }
    else
        cout << "invalid";
    return 0;
}
