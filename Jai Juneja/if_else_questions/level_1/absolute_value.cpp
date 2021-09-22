#include <iostream>

using namespace std;

int main() {
    int num;
    cout << "Give number: ";
    cin >> num;

    cout << "Absolute Value: ";
    if (num >= 0) 
        cout << num << endl;
    else
        cout << -num << endl;
    return 0;
}
