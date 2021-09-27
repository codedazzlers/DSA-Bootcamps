#include <iostream>
using namespace std;

int main()
{
    int r1, c1, r2, c2;
    cout << "Enter rows and columns for first matrix: ";
    cin >> r1 >> c1;
    cout << "Enter rows and columns for second matrix: ";
    cin >> r2 >> c2;
    while (c1!=r2)
    {
        cout << "column of first matrix not equal to row of second.";
        cout << "Enter rows and columns for first matrix: ";
        cin >> r1 >> c1;
        cout << "Enter rows and columns for second matrix: ";
        cin >> r2 >> c2;
    }
    int a[r1][c1], b[r2][c2], mult[r1][c2];
    cout << endl << "Enter elements of matrix 1:" << endl;
    for(int i = 0; i < r1; i++){
        for(int j = 0; j < c1; j++)
        {
            cout << "Enter element at" << i + 1 << j + 1 << " : ";
            cin >> a[i][j];
        }
    }
    cout << endl << "Enter elements of matrix 2:" << endl;
    for(int i = 0; i < r2; i++){
        for(int j = 0; j < c2; j++)
        {
            cout << "Enter element at" << i + 1 << j + 1 << " : ";
            cin >> b[i][j];
        }
    }
    for(int i = 0; i < r1; i++){
        for(int j = 0; j < c2; j++)
        {
            mult[i][j]=0;
        }
    }
    for(int i = 0; i < r1; i++){
        for(int j = 0; j < c2; j++){
            for(int k = 0; k < c1; k++)
            {
                mult[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    cout << endl << "Output Matrix: " << endl;
    for(int i = 0; i < r1; i++){
        for(int j = 0; j < c2; j++){
            cout << mult[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}