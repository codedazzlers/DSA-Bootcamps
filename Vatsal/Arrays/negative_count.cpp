#include <iostream>
using namespace std;

int main()
{
    int i, size, sum = 0;

    cout << "Enter the size of an array:" << endl;
    cin >> size;
    cout << "Enter the elements of an array:" << endl;
    int arr[size];
    for (i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    for (i = 0; i < size; i++)
    {

        if (arr[i] < 0)
        {
            sum++;
        }
    }
    cout << "Total negative elements in array are : " << sum << endl;

    return 0;
}