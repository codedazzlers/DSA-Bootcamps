#include <iostream>

using std::cout; using std::cin;
int main() {
    int num, product=1;
    cin >> num;
    while (num != 0) {
        product *= (num % 10);
        num = num /10;
    }
    cout << product << '\n';
    return 0;
}