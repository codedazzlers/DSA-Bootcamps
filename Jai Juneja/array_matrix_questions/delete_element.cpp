#include <iostream>

using namespace std;

int main() {
    int arr[1000], n;
    cout << "Give no. of elements: ";
    cin >> n;
    cout << "Give elements of array: ";
    for (int i = 0; i < n; i++) cin >> arr[i];

    int pos;
    cout << "Give position of element to delete: ";
    cin >> pos;

    if (pos > n || pos <= 0) {
        cout << "Deletion not possible";
    } else {
        for (int i = pos-1; i < n-1; i++)
            arr[i+1] = arr[i];
        n--;
    }
    cout << "Elements of array are ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << ' ';
    
    return 0;
}

