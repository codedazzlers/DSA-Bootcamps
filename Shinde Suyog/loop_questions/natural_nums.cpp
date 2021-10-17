#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Give value of n: ";
    cin >> n;

    cout << "Natural numbers from 1 to " << n << " are: " << endl;
    for (int i = 1; i <= n; i++) {
        cout << i << ' ';
    }
    return 0;
}
