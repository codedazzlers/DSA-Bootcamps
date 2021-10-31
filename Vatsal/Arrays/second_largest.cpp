#include <iostream>
#include <limits.h>
using namespace std;

int main()
{
    int size, i;
    int max1, max2;
    cout << "Enter size of the array : " << endl;
    cin >> size;
    int arr[size];
    cout << "Enter elements in the array: " << endl;
    for (i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    max1 = max2 = INT_MIN;
    for (i = 0; i < size; i++)
    {
        if (arr[i] > max1)
        {
            max2 = max1;
            max1 = arr[i];
        }
        else if (arr[i] > max2 && arr[i] < max1)
        {

            max2 = arr[i];
        }
    }
    cout << "First largest : " << max1 << endl;
    cout << "Second largest:  " << max2 << endl;

    return 0;
}