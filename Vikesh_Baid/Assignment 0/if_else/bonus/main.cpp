#include <iostream>

int main() {
    float salary, yos, net_bonus;
    std::cin >> salary >> yos;
    if (yos > 5) {
        net_bonus = salary * .05;
        std::cout << "Net Bonus = " << net_bonus << std::endl;
    }
    else
        std::cout << "Not eligible for Bonus" << std::endl;

    return 0;
}