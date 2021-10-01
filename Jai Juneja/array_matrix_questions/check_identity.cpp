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

    bool isIdentity = true;
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if (i == j && A[i][j] != 1) {
                isIdentity = false;
                break;
            } else if (i != j && A[i][j] != 0) {
                isIdentity = false;
                break;
            }
        }
        if (!isIdentity)
            break;
    }
    
    if (isIdentity)
        cout << "It is an identity matrix";
    else
        cout << "It is not an identity matrix";
    return 0;
}
