#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    int maximum = INT_MIN;
    int minimum = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        maximum = max(maximum, arr[i]);
        minimum = min(minimum, arr[i]);
    }
    cout << maximum << endl;
    cout << minimum << endl;

    return 0;
}