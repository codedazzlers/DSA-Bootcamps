#include <iostream>

using namespace std;

int main()
{
    int n, sum = 0;
    cin >> n;
    int arr[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            cin >> arr[i][j];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if ((n - i - 1) == j)
                sum += arr[i][j];
        }
    }
    cout << "sum = " << sum;
    return 0;
}
