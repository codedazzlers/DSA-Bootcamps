#include <iostream>
using namespace std;

void reverse(int arr[], int end, int start)
{
    while (start < end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

void rotateArr(int arr[], int size, int N)
{
    N = N % size;
    if (N < 0)
    {
        N = N + size;
    }
    int start = 0, end = size - 1;
    reverse(arr, size - N - 1, 0);
    reverse(arr, size - 1, size - N);
    reverse(arr, size - 1, 0);
}

int main()
{
    int i, N, size;
    cout << "Enter the size of array" << endl;
    cin >> size;
    int arr[size];
    cout << "Enter elements in array:" << endl;
    for (i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter the number of elements to right rotate: " << endl;
    cin >> N;
    rotateArr(arr, size, N);
    for (i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}