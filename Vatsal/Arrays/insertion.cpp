#include <iostream>
using namespace std;

int main()
{
    int i, size, num, pos;
    cout << "Enter size of the array : " << endl;
    cin >> size;
    int arr[size];
    cout << "Enter elements in array : " << endl;
    for (i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter element to insert : " << endl;
    cin >> num;
    cout << "Enter the element position : " << endl;
    cin >> pos;

    if (pos > size + 1 || pos <= 0)
    {
        cout << "Invalid position!" << endl;
    }
    else
    {

        for (i = size; i >= pos; i--)
        {
            arr[i] = arr[i - 1];
        }

        arr[pos - 1] = num;
        size++;

        cout << "Array elements after insertion : " << endl;
        for (i = 0; i < size; i++)
        {
            cout << arr[i] << " ";
        }
    }

    return 0;
}