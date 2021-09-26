#include <iostream>

using namespace std;
int factorial(int n)
{
    int f = 1;
    for (int i = 1; i <= n; i++)
        f *= i;
    return f;
}
int isStrong(int num)
{
    int copy = num, sum = 0;
    while (num)
    {
        int d = num % 10;
        sum += factorial(d);
        num /= 10;
    }
    if (sum == copy)
        return 1;
    else
        return 0;
}
int main()
{
    int n;
    cin >> n;
    if (isStrong(n) == 1)
        cout << "strong";
    else
        cout << "not strong";
    return 0;
}
