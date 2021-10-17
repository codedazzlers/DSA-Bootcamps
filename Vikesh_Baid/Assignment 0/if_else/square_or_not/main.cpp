#include <iostream>

int main() {
    int l, b;
    std::cin >> l >> b;
    if (l == b)
        std::cout << "It is a Square"<< std::endl;
    else
        std::cout << "It is not a Square"<< std::endl;
    return 0;
}