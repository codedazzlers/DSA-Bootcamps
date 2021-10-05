#include <iostream>

using std::cout; using std::cin;

int main() {
    int temp, num, count, first_digit, last_digit;
    cin >> num;
    temp = num;

    last_digit = num % 10;

    while (num > 10) {
        num = num / 10;
    }
    first_digit = num;
    cout << "First Digit: " << first_digit << '\n';
    cout << "Last Digit: " << last_digit << '\n';

    cout << "sum of First and Last Digit: " << first_digit + last_digit << '\n';
    return 0;
}