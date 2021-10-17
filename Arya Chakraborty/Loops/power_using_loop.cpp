#include <bits/stdc++.h>
using namespace std;
int main()
{
    double a, b;
    double power = 1.0;
    cin >> a >> b;
    if (a == 0)
        cout << "0";
    else
    {
        if (b > 0)
        {
            for (int i = 1; i <= b; i++)
            {
                power *= a;
            }
        }
        else if (b < 0)
        {
            for (int i = 1; i <= abs(b); i++)
            {
                power *= 1 / a;
            }
        }
        else
            power = 1;
        cout << power;
    }
    return 0;
}
