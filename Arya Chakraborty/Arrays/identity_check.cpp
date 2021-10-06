#include <iostream>

using namespace std;

int main()
{
    int n, c = 0;
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
            if (i == j)
            {
                if (arr[i][j] == 1)
                    c++;
            }
            else
            {
                if (arr[i][j] == 0)
                    c++;
            }
        }
    }
    if (c == n * n)
        cout << "yes";
    else
        cout << "no";
    return 0;
}
