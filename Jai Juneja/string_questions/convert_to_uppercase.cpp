#include <iostream>

using namespace std;

int main() {
    string str;
    cout << "Give a string: ";
    getline(cin, str);

    for(int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z')
            str[i] -= 32;
    }

    cout << "Corresponding uppercase string is " << str << endl;

    return 0;
}
