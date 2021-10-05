#include <iostream>

using std::cin; using std::cout;
int main() {
    int n, i = 2, sum = 0;
    cin >> n;

    // time complexity O(n)
    while (i <= n) {
        sum = sum + i;
        i = i+2;
    }
    cout << "using while loop sum is " << sum << '\n';

    // time complexity O(1)
    sum = 0;
    n = n/2;
    sum = (n * (n+1));
    cout << "using formula sum is " << sum << '\n';
    return 0;
}