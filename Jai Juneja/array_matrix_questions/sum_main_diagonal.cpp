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

    int sum = 0;
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            if (i == j) {
                sum += A[i][j];
            }
        }
    }
    cout << "Main diagonal sum is " << sum;

    return 0;
}
