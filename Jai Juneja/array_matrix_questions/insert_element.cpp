#include <iostream>

using namespace std;

int main() {
    int arr[1000], n;
    cout << "Give no. of elements: ";
    cin >> n;
    cout << "Give elements of array: ";
    for (int i = 0; i < n; i++) cin >> arr[i];

    int el, pos;
    cout << "Give the element to insert and its position: ";
    cin >> el >> pos;

    if (pos > n+1 || pos <= 0) {
        cout << "Insertion not possible" << endl;
        return 0;
    }
    for (int i = n-1; i >= pos-1; i--)
        arr[i+1] = arr[i];
    arr[pos-1] = el;
    n++;

    cout << "The array now is ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << ' ';

    return 0;
}

