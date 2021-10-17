#include <iostream>

using std::cin; using std::cout;
int main() {
    int sum, n, i = 1;
    cin >> n;

    // time complexity O(n)
    while (i <= n) {
        sum = sum + i;
        i++;
    }
    cout << "using while loop sum is " << sum << '\n';

    // time complexity O(1)
    sum = 0;
    sum = (n * (n+1))/2;
    cout << "using formula sum is " <<sum << '\n';
    return 0;
}