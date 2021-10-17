#include <iostream>

using namespace std;

int main() {
    int A[100][100], row, col;
    cout << "Enter no. of rows and columns for matrix: ";
    cin >> row >> col;
    cout << "Give matrix elements:" << endl;
    for (int i = 0; i < row; i++)
        for (int j = 0; j < col; j++)
            cin >> A[i][j];

    
    if (row >= col) {   // When lower triangular elements are more than the upper ones
        // Swap using lower triangular elements
        for (int i = 1; i < row; i++) {
            for (int j = 0; j < i; j++) {
                int temp = A[i][j];
                A[i][j] = A[j][i];
                A[j][i] = temp;
            }
        }
    } else {    // When upper triangular elements are more than the lower ones
        // Swap using upper triangular elements
        for (int i = 0; i < row; i++) {
            for (int j = i+1; j < col; j++) {
                int temp = A[i][j];
                A[i][j] = A[j][i];
                A[j][i] = temp;
            }
        }
    }

    cout << "The transpose matrix is" << endl;
    for (int i = 0; i < col; i++) {
        for (int j = 0; j < row; j++) {
            cout << A[i][j] << ' ';
        }
        cout << endl;
    }

    return 0;
}
