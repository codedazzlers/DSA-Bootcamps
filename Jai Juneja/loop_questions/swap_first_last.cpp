#include <iostream>

using namespace std;

int main() {
    int num;
    cout << "Give number: ";
    cin >> num;

    int numOfDigits = 1, firstDigit = num, lastDigit = num%10;
    while (firstDigit >= 10) {
        firstDigit /= 10;
        numOfDigits++;
    }

    int swappedNum = num - lastDigit + firstDigit; // swapping last digit with first digit
    int temp = 1;       // power of 10 for first digit
    for (int i = 1; i < numOfDigits; i++)
        temp *= 10; 
    swappedNum = swappedNum + (lastDigit - firstDigit)*temp; // swapping first digit with last digit

    cout << "After swapping first and last digits, the number is " << swappedNum << endl;
    return 0;
}
