#include <iostream>

using std::cout; using std::cin;

int main() {
    int year;
    cin >> year;
    if (year % 4 == 0 and year % 100 != 0)
       cout << "It is a leap year\n";
    else if (year % 100 == 0 and year % 400 == 0) {
        cout << "It is a leap year\n";
    }
    else
        cout << "It is not a leap year\n";
    return 0;
}