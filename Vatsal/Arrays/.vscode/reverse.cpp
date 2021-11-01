#include <iostream>
using namespace std;

void reverse(int arr[], int size)
{
    int start = 0, end = size - 1;
    while (start < end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

int main()
{
    int size, i;
    cout << "Enter size of the array: " << endl;
    cin >> size;
    int arr[size];
    cout << "Enter elements in array: " << endl;
    for (i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    reverse(arr, size);
    cout << "Reverse of the array is: " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}