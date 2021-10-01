#include <iostream>

using namespace std;

int main() {
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    if (num1 > num2)
        cout << num1 << " is greatest" << endl;
    else if (num1 < num2)
        cout << num2 << " is greatest" << endl;
    else
        cout << "Both are equal" << endl;
    return 0;
}
