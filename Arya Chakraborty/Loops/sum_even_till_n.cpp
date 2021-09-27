#include <iostream>

using namespace std;

int main()
{
    int c, i = 1, sum = 0;
    cin >> c;
    if (c < 1)
        cout << "invalid number";
    else
    {
        while (i <= c)
        {
            if (i % 2 == 0)
                sum += i;
            i++;
        }
        cout << sum;
    }
    return 0;
}
