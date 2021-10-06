#include <iostream>
using namespace std;

int main()
{
    int arr[100], freq[100];
    int n, i, j, count;
    cout << "enter size of array" << endl;
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
        freq[i] = -1;
    }
    for (i = 0; i < n; i++)
    {
        count = 1;
        for (j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
                freq[j] = 0;
            }
        }

        if (freq[i] != 0)
        {
            freq[i] = count;
        }
    }

    for (i = 0; i < n; i++)
    {
        if (freq[i] == 1)
        {
            cout << "the unique numbers is " << arr[i] << endl;
        }
    }

    return 0;
}