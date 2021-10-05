#include <iostream>

using namespace std;

int main() {
    int num, firstDigit, lastDigit;
    cout << "Give number: ";
    cin >> num;
    
    lastDigit = num % 10;
    firstDigit = num;
    while (firstDigit >= 10) {
        firstDigit = firstDigit/10;
    }
    
    cout << "First digit: " << firstDigit << endl;
    cout << "Last digit: " << lastDigit << endl;
    return 0;
}
