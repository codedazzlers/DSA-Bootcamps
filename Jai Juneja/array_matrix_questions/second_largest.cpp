#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Give no. of elements: ";
    cin >> n;
    int arr[n];
    cout << "Give elements of array: ";
    for (int i = 0; i < n; i++) cin >> arr[i];
    
    int firstMax = 0;
    int secondMax = -1;
    for (int i = 1; i < n; i++) {
        if (arr[firstMax] < arr[i]) {
            secondMax = firstMax;
            firstMax = i;
        } else if (arr[secondMax] < arr[i] && arr[i] != arr[firstMax]) {
            secondMax = i;
        }
    }
    if (secondMax == -1)
        cout << "There is no second largest element." << endl;
    else
        cout << "Second largest element of the array is " << arr[secondMax];
    return 0;
}
