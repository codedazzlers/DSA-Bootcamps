#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Give number for which multiplication table is to be printed: ";
    cin >> n;

    for (int i = 1; i < 11; i++) {
        cout << n << " * " << i << " = " << n*i << endl;
    }

    return 0;
}
