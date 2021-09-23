#include <bits/stdc++.h>
using namespace std;
int power(int a, int b)
{
    double x = a;
    double y = b;
    return (int)pow(x, y);
}
int main()
{
    int n;
    cin >> n;
    if (n == 0)
        cout << "0" << endl;
    else
    {
        int s = 0;
        while (n)
        {
            int d = n % 10;
            s += d;
            n /= 10;
        }
        cout << s;
    }
    return 0;
}
