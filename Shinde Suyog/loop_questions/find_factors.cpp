#include <iostream>

using namespace std;

int main() {
    int num;
    cout << "Give number: ";
    cin >> num;

    cout << "The factors are: 1 ";
    for (int i = 2; i <= num/2; i++) {
        if (num%i == 0)
            cout << i << " ";
    }
    cout << num << endl;
    return 0;
}
