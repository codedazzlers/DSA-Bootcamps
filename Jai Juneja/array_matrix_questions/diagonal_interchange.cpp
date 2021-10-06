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

    int m = 0, n = 0, p = 0, q = size-1;
    for (int i = 0; i < size; i++) {
        int temp = A[m][n];
        A[m][n] = A[p][q];
        A[p][q] = temp;
        m++;
        n++;
        p++;
        q--;
    }

    cout << "Matrix after interchanging diagonals is" << endl;
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            cout << A[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
