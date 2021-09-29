#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    int largest;int second_largest;
    largest=second_largest=INT_MIN;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > largest)
        {
            second_largest = largest;
            largest = arr[i];
        }
        else if (arr[i] > second_largest && arr[i] < largest)
        {
            second_largest = arr[i];
        }
    }

    cout << second_largest << endl;

    return 0;
}