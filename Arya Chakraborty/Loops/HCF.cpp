#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num1, num2, min, hcf = 1;
    cin >> num1 >> num2;
    min = (num1 < num2) ? num1 : num2;
    for (int i = 1; i <= min; i++)
    {
        if (num1 % i == 0 && num2 % i == 0)
            hcf = i;
    }
    cout << hcf;
    return 0;
}
