#include <iostream>
using namespace std;

int main()
{
    char x;
    cin >> x;
    int ascii = int(x);
    if (ascii >= 65 && ascii <= 90)
    {
        cout << "it is a uppercase letter";
    }
    else
    {
        cout << "it is a lowercase letter";
    }

    return 0;
}