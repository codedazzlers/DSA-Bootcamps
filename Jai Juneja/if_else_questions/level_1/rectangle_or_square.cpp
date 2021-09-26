#include <iostream>

using namespace std;

int main() {
    int length, breadth;
    cout << "Give length and breadth: ";
    cin >> length >> breadth;

    if (length == breadth)
        cout << "It is a square.." << endl;
    else
        cout << "It is a rectangle.." << endl;

    return 0;
}
