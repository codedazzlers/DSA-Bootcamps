#include <iostream>

using namespace std;

int main() {
    int A[100][100], B[100][100], C[100][100], r1, r2, c1, c2;
    cout << "Give no. of rows and columns for matrix A:" << endl;
    cin >> r1 >> c1;
    cout << "Enter the elements for matrix A:" << endl;
    for (int i = 0; i < r1; i++)
        for (int j = 0; j < c1; j++)
            cin >> A[i][j];
    cout << "Give no. of rows and columns for matrix B:" << endl;
    cin >> r2 >> c2;
    cout << "Enter the elements for matrix B:" << endl;
    for (int i = 0; i < r2; i++)
        for (int j = 0; j < c2; j++)
            cin >> B[i][j];

    if (c1 != r2)
        cout << "A and B cannot be multiplied" << endl;
    else {
        for (int i = 0; i < r1; i++) {
            for (int j = 0; j < c2; j++) {
                C[i][j] = 0;
                for (int k = 0; k < r2; k++) {
                    C[i][j] += A[i][k]*B[k][j];
                }
            }
        }
        cout << "A * B is " << endl;
        for (int i = 0; i < r1; i++) {
            for (int j = 0; j < c2; j++)
                cout << C[i][j] << ' ';
            cout << '\n';
        }
    }

    return 0;
}
