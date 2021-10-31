#include <iostream>
using namespace std;

int main()
{
    int n, res = 1, i;
    cout << "Enter size of the array : " << endl;
    cin >> n;
    int a[n], b[n];
    cout << "Enter elements in array : " << endl;
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    a[0] = b[0];
    for (i = 1; i < n; i++)
    {
        if (b[res - 1] != a[i])
        {
            b[res] = a[i];
            res++;
        }
    }
    for (i = 0; i < res; i++)
    {
        a[i] = b[i];
    }
    cout << "Array after removing the duplicate elements are:" << endl;
    for (i = 1; i < res; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}