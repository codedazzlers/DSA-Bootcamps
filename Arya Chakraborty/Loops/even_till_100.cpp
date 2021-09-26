#include <iostream>

using namespace std;

int main()
{
    int c = 1;
    while (c <= 100)
    {
        if (c % 2 == 0)
            cout << c << " ";
        c++;
    }
    return 0;
}
