#include <iostream>
#include <cmath>

using std::cin; using std::cout;
int main() {
    int num, digits, last_digit, first_digit, swapped_num;
    cin >> num;
    last_digit = num % 10;
    digits = (int) log10(num);
    first_digit = (int) (num / pow(10, digits));

    swapped_num = (int) last_digit * pow(10, digits);
    swapped_num += num % ((int) pow(10, digits));
    swapped_num -= last_digit;
    swapped_num += first_digit;
    cout << swapped_num << '\n';
    return 0;
}