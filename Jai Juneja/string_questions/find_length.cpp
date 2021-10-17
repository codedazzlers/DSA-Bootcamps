#include <iostream>

using namespace std;

int main() {
    string str;
    cout << "Give a string: ";
    cin >> str;

    int length;
    for (length = 0; str[length] != '\0'; length++);
    cout << "String length is " << length;
    return 0;
}
