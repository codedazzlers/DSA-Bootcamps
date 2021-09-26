#include <iostream>

using namespace std;

int main() {
    int ageA, ageB, ageC;
    
    cout << "Give ages of A, B and C: ";
    cin >> ageA >> ageB >> ageC;

    int minimum = ageA, maximum = ageA;
    char youngest = 'A', oldest = 'A';
    // for finding youngest
    if (minimum > ageB) {
        youngest = 'B';
        minimum = ageB;
    }
    if (minimum > ageC) {
        youngest = 'C';
        minimum = ageC;
    }
    // for finding oldest
    if (maximum < ageB) {
        oldest = 'B';
        maximum = ageB;
    }
    if (maximum < ageC) {
        oldest = 'C';
        maximum = ageC;
    }

    cout << oldest << " is the oldest with age = " << maximum << endl;
    cout << youngest << " is the youngest with age = " << minimum << endl;
    return 0;
}
