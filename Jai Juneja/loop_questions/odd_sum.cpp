#include <iostream>

using namespace std;

int main() {
    int n, sum = 0;
    cout << "Give value of n: ";
    cin >> n;

    for (int i = 1; i <= n; i += 2)
        sum += i;

    cout << "Sum of odd numbers upto " << n << " is " << sum << endl;
    return 0;
}
