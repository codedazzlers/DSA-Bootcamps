#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Give the value of n: ";
    cin >> n;

    cout << "Natural numbers in reverse order from " << n << " to 1 are:" << endl;
    for (int i = n; i > 0; i--) {
        cout << i << ' ';
    }
    return 0;
}
