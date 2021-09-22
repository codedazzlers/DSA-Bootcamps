#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    if (n > 0)
    {
        cout << n << endl;
    }
    else if (n < 0)
    {
        cout << -n << endl;
    }
    else
        cout << 0 << std::endl;
}
