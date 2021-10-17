#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int even_count = 0;
    int odd_count = 0;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            even_count++;
        }
        else
        {
            odd_count++;
        }
    }
    cout << "number of even number is " << even_count << endl;
    cout << "number of odd number is " << odd_count << endl;

    return 0;
}