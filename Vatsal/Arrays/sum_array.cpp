#include <iostream>
using namespace std;

int sumArr(int arr[], int index, int n)
{
    if (index >= n)
    {
        return 0;
    }
    return (arr[index] + sumArr(arr, index + 1, n));
}

int main()
{
    int i, n, sum = 0;
    cout << "Enter size of the array: " << endl;
    cin >> n;
    int arr[n];
    cout << "Enter elements in the array: " << endl;
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sum = sumArr(arr, 0, n);
    cout << "Sum of all elements of array : " << sum << endl;

    return 0;
}