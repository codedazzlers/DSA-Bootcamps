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
    for (int i = 1; i < n; i++)
    {
        if (isStrong(i) == 1)
            cout << i << " ";
    }
    return 0;
}
