#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter number of elements= ";
    cin >> n;
    int ar[n];
    cout << "Enter elements= ";

    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }
    for (int i = 0; i < n; i++){
        if (ar[i] < 0)
        {
            cout << ar[i] << " ";
        }
    }
    return 0;
}
