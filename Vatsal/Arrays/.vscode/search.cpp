#include <iostream>
using namespace std;

int linearSearch(int arr[], int n, int element)
{
    int i;
    for (i = 0; i < n; i++)
    {
        if (arr[i] == element)
            return i;
    }
    return -1;
}

int main()
{
    int n;
    cout << "Enter the size of array:" << endl;
    cin >> n;
    int arr[n], index, element, i;
    cout << "Enter the elements in array:" << endl;
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter the element you want to search:" << endl;
    cin >> element;
    index = linearSearch(arr, n, element);
    if (index == -1)
    {
        cout << "Element not found" << endl;
    }
    else
    {
        cout << "Element " << element << " is found at index " << index << " and position " << index + 1;
    }
    return 0;
}