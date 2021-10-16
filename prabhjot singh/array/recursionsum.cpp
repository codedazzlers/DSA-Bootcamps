#include <iostream>
using namespace std;
int sum = 0, a[10], i, n;
int rsum(int s)
{
    while (i >= 0)
        sum = sum + s + rsum(a[--i]);
    return sum;
}
int main()
{
    cout << "\nenter array size(max. 10) :";
    cin >> n;
    cout << "\nenter array :";
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
        rsum(a[--i]);
    cout << "\nsum:" << sum;
    return 0;
}
