#include <iostream>

using namespace std;

int main()
{
    int length, breadth;
    cin >> length >> breadth;
    if (length == breadth)
        std::cout << "square" << std::endl;
    else
        std::cout << "not a square" << std::endl;
    return 0;
}
