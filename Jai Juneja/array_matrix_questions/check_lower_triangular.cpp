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

    bool isLower = true;
    for (int i = 0; i < size; i++) {
        for (int j = i+1; j < size; j++) {
            if (A[i][j] != 0) {
                isLower = false;
                break;
            }
        }
        if (!isLower)
            break;
    }
    if (isLower)
        cout << "The matrix is lower triangular";
    else
        cout << "The matrix is not lower triangular";

    return 0;
}
