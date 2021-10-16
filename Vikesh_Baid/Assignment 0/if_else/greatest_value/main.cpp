#include <iostream>

int main() {
    int a, b;
    std::cin >> a >> b;
    if (a > b)
        std::cout << "First value is greatest" << std::endl;
    else
        std::cout << "Second value is greatest" << std::endl;
    return 0;
}