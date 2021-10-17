#include <iostream>

using namespace std;

int main() {
    int n, arr[100], f[100] = { 0 };   // initialize frequency array with 0s
    cout << "Give no. of elements: ";
    cin >> n;
    cout << "Give elements of array: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    for (int i = 0; i < n; i++) {
        if (f[i] != -1) {
            for (int j = i+1; j < n; j++) {
                if (arr[i] == arr[j]) {     // increase frequency for those elements that
                                                            // are not already seen
                    f[j] = -1;
                    f[i]++;         // increase frequency of ith element but will be
                                    // 1 less than the original frequency
                }
            }
        }
    }
    for (int i = 0; i < n; i++) {
        if (f[i] != -1) {
            f[i]++;             // correct the frequency for each first unique element
            cout << "Frequency of " << arr[i] << " is " << f[i] << endl;
        }
    }

    return 0;
}
