#include <iostream>
using namespace std;

int main()
{

    int s1, i, j = 0, k = 0;
    cout << "Enter size of array : " << endl;
    cin >> s1;
    int a[s1], b[10], c[10];
    cout << "Enter elements in array : " << endl;
    for (i = 0; i < s1; i++)
    {
        cin >> a[i];
    }
    for (i = 0; i < s1; i++)
    {
        if (a[i] % 2 == 0)
        {
            b[j] = a[i];
            j++;
        }
        else
        {
            c[k] = a[i];
            k++;
        }
    }
    cout << "Even elements array is :" << endl;
    for (i = 0; i < j; i++)
    {
        cout << b[i] << " ";
    }
    cout << "\n";
    cout << "Odd elements array is :" << endl;
    for (i = 0; i < j; i++)
    {
        cout << c[i] << " ";
    }
    return 0;
}