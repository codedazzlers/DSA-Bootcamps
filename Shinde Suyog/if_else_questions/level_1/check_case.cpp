#include <iostream>

using namespace std;

int main() {
    char letter;
    cout << "Give a letter: ";
    cin >> letter;
    
    if (letter>=65 && letter<=90)
        cout << "It is a uppercase letter" << endl;
    else if (letter>=97 && letter<=122)
        cout << "It is a lowercase letter" << endl;

    return 0;
}
