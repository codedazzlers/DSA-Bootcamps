#include <iostream>

using namespace std;

int main() {
    int n, arr[100];
    bool visited[100] = {0};
    cout << "Give no. of elements: ";
    cin >> n;
    cout << "Give elements of array: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    for (int i = 0; i < n; i++) {
        bool unique = true;
        for (int j = i+1; j < n; j++) {
            if (!visited[j] && arr[j] == arr[i]) {
                visited[j] = true;
                unique = false;
            }
        }
        if (unique && !visited[i])
            cout << arr[i] << ' ';
        visited[i] = true;
    }
    return 0;
}
