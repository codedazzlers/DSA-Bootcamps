#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int pos, i;
    cout << "enter position";
    cin >> pos;

    if (pos > n + 1 || pos < 0)
    {
        cout << "invalid position you have entered";
    }
    else
    {
        for (i = pos - 1; i < n - 1; i++)
        {
            arr[i] = arr[i + 1];
        }
        // arr[i]=arr[pos];
        n--;
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }

    return 0;
}