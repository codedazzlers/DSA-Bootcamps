#include <iostream>

int main() {
    int x = 2, y = 5, z = 0;
    std::cout << (x==2) << '\n';
    std::cout << (x!=5) << '\n';
    std::cout << (x!=5 && y >=5) << '\n';
    std::cout << (z!=0 || x==2) << '\n';
    std::cout << !(y<10) << '\n';
    return 0;
}