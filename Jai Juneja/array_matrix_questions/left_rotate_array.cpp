#include <iostream>

using namespace std;

int main() {
    int size, arr[1000], rotations;
    cout << "Give size of array: ";
    cin >> size;
    cout << "Give elements of array: ";
    for (int i = 0; i < size; i++)
        cin >> arr[i];
    cout << "Give no. of left rotations: ";
    cin >> rotations;

    int actualRotations = rotations % size;
    int temp[actualRotations];
    // store first rotations % size elements in temporary array
    for (int i = 0; i < actualRotations; i++)
        temp[i] = arr[i];

    // start shifting each element to its left (rotations % size) times
    // starting from the (rotations % size)+1th element in 1-indexed array
    for (int i = actualRotations; i < size; i++)
        arr[i-actualRotations] = arr[i];

    // copy the rest elements from temp to the remaining part of the array
    for (int i = size-actualRotations, j = 0; i < size && j < actualRotations; i++, j++)
        arr[i] = temp[j];

    cout << "The array after rotating is ";
    for (int i = 0; i < size; i++)
        cout << arr[i] << ' ';

    return 0;
}
