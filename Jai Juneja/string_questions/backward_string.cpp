#include <iostream>

using namespace std;

int main() {
    string str;
    cout << "Give a string: ";
    cin >> str;

    int length;
    for(length = 0; str[length] != '\0'; length++);

    cout << "Printing string backwards: ";
    for(int i = length-1; i >= 0; i--)
        cout << str[i];

    return 0;
}
