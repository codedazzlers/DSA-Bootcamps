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

    bool isSymmetric = true;
    for (int i = 0; i < size; i++) {
        for (int j = i+1; j < size; j++) {
            if (A[i][j] != A[j][i]) {
                isSymmetric = false;
                break;
            }
        }
        if (!isSymmetric)
            break;
    }
    
    if (isSymmetric)
        cout << "It is symmetric" << endl;
    else
        cout << "It is not symmetric" << endl;
    return 0;
}
