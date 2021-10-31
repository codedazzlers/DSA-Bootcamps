#include <iostream>
using namespace std;

void display(int a[], int index, int size)
{
    if (index >= size)
    {
        return;
    }
    cout << " " << a[index];
    display(a, index + 1, size);
}

int main()
{

    int i, size;
    cout << "Enter the size of an array" << endl;
    cin >> size;
    int a[size];
    cout << "Enter the elements of an array" << endl;
    for (i = 0; i < size; i++)
    {
        cin >> a[i];
    }
    cout << "The elements of the array are:" << endl;
    display(a, 0, size);
    return 0;
}