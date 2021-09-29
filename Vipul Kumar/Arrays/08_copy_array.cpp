#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    int j;
    int arr01[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        arr01[i] = arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr01[i] << endl;
    }

    return 0;
}