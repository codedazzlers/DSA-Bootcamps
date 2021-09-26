#include <bits/stdc++.h>
using namespace std;
int isPrime(int n)
{
    int c = 0;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
            c++;
    }
    if (c == 2)
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
            if (isPrime(i) == 1)
                cout << i << " ";
        }
    }
    else
        cout << "invalid";
    return 0;
}
