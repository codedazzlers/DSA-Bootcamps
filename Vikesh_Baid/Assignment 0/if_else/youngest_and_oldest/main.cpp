#include <iostream>

int main() {
    int p1, p2, p3;
    std::cin >> p1;
    std::cin >> p2;
    std::cin >> p3;
    // oldest amoung the three person
    if (p1 > p2 && p1 > p3)
        std::cout << "p1 is oldest" << std::endl;
    else if (p2 > p1 && p2 > p3)
        std::cout << "p2 is oldest" << std::endl;
    else
        std::cout << "p3 is the oldest" << std::endl;
    
    // youngest amoung the three person
    if (p1 < p2 && p1 < p3)
        std::cout << "p1 is youngest" << std::endl;
    else if (p2 < p1 && p2 < p3)
        std::cout << "p2 is youngest" << std::endl;
    else
        std::cout << "p3 is youngest" << std::endl;
    return 0;
}