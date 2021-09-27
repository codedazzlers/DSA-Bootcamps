#include <iostream>

using namespace std;
int isPrefect(int num)
{
    int sum = 0;
    for (int i = 1; i <= num / 2; i++)
    {
        if (num % i == 0)
        {
            sum += i;
        }
    }
    if (sum == num)
        return 1;
    else
        return 0;
}
int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        if (isPrefect(i) == 1)
            cout << i << " ";
    }
    return 0;
}
