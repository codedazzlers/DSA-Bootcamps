#include <iostream>

int main() {
    float marks;
    std::cin >> marks;
    if (marks < 25)
        std::cout << "Grade is F" << std::endl;
    else if (marks >= 25 && marks < 45)
        std::cout << "Grade is E" << std::endl;
    else if (marks >= 45 && marks < 50)
        std::cout << "Grade is D" << std::endl;
    else if (marks >= 50 && marks < 60)
        std::cout << "Grade is C" << std::endl;
    else if (marks >= 60 && marks < 80)
        std::cout << "Grade is B" << std::endl;
    else if (marks >= 80)
        std::cout << "Grade is A" << std::endl;

    return 0;
}