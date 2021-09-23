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
    int n, c = 0;
    cin >> n;
    int copy = n;
    if (n == 0)
        cout << "0" << endl;
    else
    {
        int last_digit = n % 10;
        while (copy >= 10)
        {
            copy /= 10;
            c++;
        }
        int first_digit = copy;
        int ans = (n % (power(10, c))) / 10;
        ans = last_digit * power(10, c - 1) + ans;
        ans = ans * 10 + first_digit;
        cout << ans;
    }
    return 0;
}
