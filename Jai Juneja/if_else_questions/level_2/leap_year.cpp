#include <iostream>

using namespace std;

int main() {
    unsigned int year;
    cout << "Give the year: ";
    cin >> year;

    bool leap = false;

    if (year%4 == 0)
        leap = true;
    if (year%100 == 0) {
        leap = false;
        if (year%400 == 0)
            leap = true;
    }

    if (leap)
        cout << "It is a leap year";
    else
        cout << "It is not a leap year";
    return 0;
}
