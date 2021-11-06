#include <iostream>
using namespace std;

int main()
{
    int n, count = 0, i;
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
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] == a[j])
            {
                count++;
                break;
            }
        }
    }
    cout << "Total number of duplicate elements found in array are: " << count << endl;
    return 0;
}