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

    int pos, num;
    cout << "enter position";
    cin >> pos;
    cout << "enter the number";
    cin >> num;

    if (pos > n + 1 || pos < 0)
    {
        cout << "invalid position you have entered";
    }
    else
    {
        for (int i = n; i >= pos; i--)
        {
            arr[i] = arr[i - 1];
        }
        arr[pos - 1] = num;
        n++;
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }

    return 0;
}