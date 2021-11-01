#include <iostream>
using namespace std;

int main()
{

    int i, n, sum1 = 0, sum2 = 0;
    cout << "Enter size of the array: " << endl;
    cin >> n;
    int arr[n];
    cout << "Enter elements in the array: " << endl;
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            sum1++;
        }
        else
        {
            sum2++;
        }
    }
    cout << "Even elements in array are:" << sum1 << endl;
    cout << "Odd elements in array are:" << sum2 << endl;
    return 0;
}