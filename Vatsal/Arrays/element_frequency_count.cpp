#include <iostream>
using namespace std;

int main()
{
    int n, count, i;
    cout << "Enter size of the array : " << endl;
    cin >> n;
    int a[n], b[n];
    cout << "Enter elements in array : " << endl;
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (i = 0; i < n; i++)
    {
        count = 1;
        if (a[i] != -1)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (a[i] == a[j])
                {
                    count++;
                    a[j] = -1;
                }
            }
            b[i] = count;
        }
    }
    for (i = 0; i < n; i++)
    {
        if (a[i] != -1)
        {
            cout << "Frequency of " << a[i] << " is " << b[i] << endl;
        }
    }

    return 0;
}