#include <iostream>

using std::cout; using std::cin;
int main() {
    int n, i = 0;
    cin >> n;
    // printing number from 1 to n
    while(i <= n) {
        cout << i << " ";
        i++;
    }
    return 0;
}