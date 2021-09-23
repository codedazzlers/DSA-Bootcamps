#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    if (n > 0)
    {
        std::cout << n << std::endl;
    }
    else if (n < 0)
    {
        std::cout << -n << std::endl;
    }
    else
        std::cout << 0 << std::endl;
    return 0;
}
