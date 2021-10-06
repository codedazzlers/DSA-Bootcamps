#include <iostream>

using namespace std;

int main() {
    int size, arr[1000];
    cout << "Give size of the array: ";
    cin >> size;
    cout << "Give elements of array: ";
    for (int i = 0; i < size; i++)
        cin >> arr[i];
    
    for (int i = 0; i < size; i++) {
        for (int j = i+1; j < size; j++) {
            if (arr[i] == arr[j]) {
                for (int k = j; k < size-1; k++)
                    arr[k] = arr[k+1];
                size--;
                j--;
            }
        }
    }
    cout << "After deleting the duplicates, the array is: " << endl;
    for (int i = 0; i < size; i++)
        cout << arr[i] << ' ';
    return 0;
}
