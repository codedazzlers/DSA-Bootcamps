#include <iostream>

using namespace std;

int main() {
    int num, rem, reversed = 0;
    cout << "Give number: " << endl;
    cin >> num;

    int temp = num;
    while (temp) {
        rem = temp % 10;
        reversed = reversed*10 + rem;
        temp /= 10;
    }

    cout << reversed;
    return 0;
}
