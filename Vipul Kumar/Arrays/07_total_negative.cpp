#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int negative_count = 0;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < 0)
        {
            negative_count++;
        }
    }
    cout << "number of negative number is " << negative_count << endl;

    return 0;
}