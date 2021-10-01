#include <iostream>
using namespace std;

int main()
{
    char x;
    cin >> x;

    if (x >= 'A' && x <= 'Z')
    {
        cout << "it is a uppercase letter";
    }
    else
    {
        cout << "it is a lowercase letter";
    }

    return 0;
}