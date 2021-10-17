// 8th and 9th question

#include <iostream>

int main() {
    float classes_held, classes_attended, attended_percent;
    char medical_cause;
    std::cout << "classes_held: ";
    std::cin >> classes_held;
    std::cout << "classes _attended: ";
    std::cin >> classes_attended;
    std::cout << "Medical Cause (Y or N): ";
    std::cin >> medical_cause;
    
    attended_percent = (classes_attended/classes_held) * 100;
    std::cout << "Total class attended in percentage is " << attended_percent << '\n';
    if (attended_percent < 75.0 && medical_cause == 'N')
        std::cout << "Not Allowed to sit in Exam" << '\n';
    else
        std::cout << "Allowed to sit in Exam" << '\n';

    return 0;
}