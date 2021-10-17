#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int del;
    cin >> del;
    for (int i = 0; i < n; i++)
    {
        if (i == del)
        {
            for (int j = i; j < n - 1; j++)
            {
                arr[j] = arr[j + 1];
            }
        }
    }
    for (int i = 0; i < n - 1; i++)
        cout << arr[i] << " ";
    return 0;
}