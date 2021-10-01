#include <iostream>

using namespace std;

int main() {
    int r, c, A[100][100];
    cout << "Give rows and columns for the matrix: ";
    cin >> r >> c;
    cout << "Give matrix elements: ";
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            cin >> A[i][j];

    for (int i = 0; i < r; i++) {
        int sum = 0;
        for (int j = 0; j < c; j++) {
            sum += A[i][j];
        }
        cout << "Row " << i+1 << " sum is " << sum << endl;
    }

    for (int i = 0; i < c; i++) {
        int sum = 0;
        for (int j = 0; j < r; j++) {
            sum += A[j][i];
        }
        cout << "Column " << i+1 << " sum is " << sum << endl;
    }

    return 0;
}
