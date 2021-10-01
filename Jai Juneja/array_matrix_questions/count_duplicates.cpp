#include <iostream>

using namespace std;

int main() {
    int size;
    cout << "Give size of array: ";
    cin >> size;
    int arr[1000];
    bool visited[1000] = {0};
    cout << "Give elements of array: ";
    for (int i = 0; i < size; i++)
        cin >> arr[i];

    int count = 0;
    for (int i = 0; i < size; i++) {
        if (!visited[i]) {
            bool isDuplicate = false;
            for (int j = i+1; j < size; j++) {
                if (arr[i] == arr[j]) {
                    visited[j] = true;
                    isDuplicate = true;
                }
            }
            if (isDuplicate)
                count++;
        }
    }
    cout << "No. of duplicate elements = " << count;
    return 0;
}

