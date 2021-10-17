#include <iostream>

using std::cout; using std::cin;
int main() {
    int num, sum=0;
    cin >> num;
    while (num != 0) {
        sum += (num % 10);
        num = num /10;
    }
    cout << sum << '\n';
    return 0;
}