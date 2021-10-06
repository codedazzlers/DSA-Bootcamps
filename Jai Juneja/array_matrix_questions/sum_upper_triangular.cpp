#include <iostream>

using namespace std;

int main() {
    int size, A[100][100];
    cout << "Enter square matrix size: ";
    cin >> size;
    cout << "Enter matrix elements: ";
    for (int i = 0; i < size; i++)
        for (int j = 0; j < size; j++)
            cin >> A[i][j];

    int sum = 0;
    for (int i = 0; i < size; i++) {
        for (int j = i; j < size; j++) {
            sum += A[i][j];
        }
    }
    cout << "Upper triangular sum = " << sum;
    return 0;
}
