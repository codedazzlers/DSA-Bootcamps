#include <iostream>
#include <utility>

using namespace std;

int main() {
    int size, A[100][100];
    cout << "Enter square matrix size: ";
    cin >> size;
    cout << "Enter matrix elements: ";
    for (int i = 0; i < size; i++)
        for (int j = 0; j < size; j++)
            cin >> A[i][j];

    bool isUpper = true;
    for (int i = 1; i < size; i++) {
        for (int j = 0; j < i; j++) {
            if (A[i][j] != 0) {
                isUpper = false;
                break;
            }
        }
        if (!isUpper)
            break;
    }
    if(isUpper)
        cout << "The matrix is upper triangular";
    else
        cout << "The matrix is not upper triangular";

    return 0;
}
