#include <iostream>
using namespace std;

int main()
{
    int i, size;

    cout << "Enter the size of the array : " << endl;
    cin >> size;
    int arr1[size], arr2[size];

    cout << "Enter elements of arr1 array : " << endl;
    for (i = 0; i < size; i++)
    {
        cin >> arr1[i];
    }

    for (i = 0; i < size; i++)
    {
        arr2[i] = arr1[i];
    }
    cout << "Elements of the arr2 array are:" << endl;
    for (i = 0; i < size; i++)
    {
        cout << arr2[i] << "\t";
    }

    return 0;
}