#include <iostream>

using std::cin; using std::cout;
int main() {
    int num,i, reverse = 0;
    cin >> num;
    while (num != 0) {
        i = num % 10;
        num /= 10;
        reverse = reverse * 10 + i;
    }
    cout << reverse << '\n';
    return 0;
}