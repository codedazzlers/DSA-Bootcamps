#include <iostream>

int main() {
    int input;
    std::cin >> input;
    if (input < 0) {
        input = input * (-1);
    }
    std::cout << "absolute value of given input is " << input << '\n';
    return 0;
}