#include <iostream>

using namespace std;

int main() {
    int size, arr[1000], rotations;
    cout << "Give size of array: ";
    cin >> size;
    cout << "Give elements of array: ";
    for (int i = 0; i < size; i++)
        cin >> arr[i];
    cout << "Give no. of right rotations: ";
    cin >> rotations;

    int actualRotations = rotations % size;
    int temp[actualRotations];
    // store last actualRotations elements in temporary array
    for (int i = size-actualRotations, j = 0; i < size && j < actualRotations; i++, j++)
        temp[j] = arr[i];

    // shift each element to its right actualRotations times
    // starting from the last actualRotations+1th item
    for (int i = size-actualRotations-1; i >= 0; i--)
        arr[i+actualRotations] = arr[i];

    // copy the rest elements from temp to the remaining part of the array
    for (int i = 0; i < actualRotations; i++)
        arr[i] = temp[i];

    cout << "The array after right rotating is ";
    for (int i = 0; i < size; i++)
        cout << arr[i] << ' ';

    return 0;
}
