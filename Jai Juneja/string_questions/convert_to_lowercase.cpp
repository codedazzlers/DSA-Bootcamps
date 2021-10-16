#include <iostream>

using namespace std;

int main() {
    string str;
    cout << "Give a string: ";
    getline(cin, str);

    for(int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] += 32;
    }

    cout << "Corresponding lowercase string is " << str << endl;

    return 0;
}
