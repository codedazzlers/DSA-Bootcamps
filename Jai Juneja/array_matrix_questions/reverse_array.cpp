#include <iostream>

using namespace std;

int main() {
    int size, arr[1000];
    cout << "Give size of array: ";
    cin >> size;
    cout << "Give elements of array: ";
    for (int i = 0; i < size; i++)
        cin >> arr[i];

    int start = 0, end = size-1;
    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
    cout << "On reversing, the array is ";
    for (int i = 0; i < size; i++)
        cout << arr[i] << ' ';

    return 0;
}

