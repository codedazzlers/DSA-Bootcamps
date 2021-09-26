#include <iostream>

using namespace std;

int main()
{
    int n, sum = 0;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int max = arr[0], max1 = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max1 = max;
            max = arr[i];
        }
    }
    cout << "2nd maximum = " << max1;
    return 0;
}
