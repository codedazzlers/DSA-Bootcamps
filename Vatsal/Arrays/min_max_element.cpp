#include <iostream>
using namespace std;

int maxArr(int arr[], int size, int index)
{
    if (index >= size - 1)
    {
        return arr[index];
    }
    int max = maxArr(arr, size, index + 1);
    if (max > arr[index])
    {
        return max;
    }
    else
    {
        return arr[index];
    }
}

int minArr(int arr[], int size, int index)
{
    if (index >= size - 1)
    {
        return arr[index];
    }
    int min = minArr(arr, size, index + 1);
    if (min < arr[index])
    {
        return min;
    }
    else
    {
        return arr[index];
    }
}

int main()
{
    int i, max, min, size;
    cout << "Enter size of the array: " << endl;
    cin >> size;
    int arr[size];
    cout << "Enter elements in the array: " << endl;
    for (i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    int maxEle = maxArr(arr, size, 0);
    cout << "Maximum element : " << maxEle << endl;
    int minEle = minArr(arr, size, 0);
    cout << "Minimum element : " << minEle << endl;
    return 0;
}