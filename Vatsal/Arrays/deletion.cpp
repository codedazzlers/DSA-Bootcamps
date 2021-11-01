#include <iostream>
using namespace std;

int main()
{
    int i, size, pos;
    cout << "Enter size of the array : " << endl;
    cin >> size;
    int arr[size];
    cout << "Enter elements in array : " << endl;
    for (i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter the position form which you want to delete an element: " << endl;
    cin >> pos;

    if (pos < 0 || pos > size)
    {
        cout << "Invalid position! " << endl;
    }
    else
    {

        for (i = pos - 1; i < size - 1; i++)
        {
            arr[i] = arr[i + 1];
        }

        size--;

        cout << "Elements of array after deletion : " << endl;
        for (i = 0; i < size; i++)
        {
            cout << arr[i] << " ";
        }
    }

    return 0;
}