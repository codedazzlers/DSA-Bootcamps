#include <iostream>

using namespace std;

int main() {
    string str, substr;
    cout << "Give string: ";
    getline(cin, str);
    cout << "Give substring that you want to look for: ";
    getline(cin, substr);

    int lenStr = 0, lenSubstr = 0;
    for (; str[lenStr] != '\0'; lenStr++);
    for (; substr[lenSubstr] != '\0'; lenSubstr++);

    int pos = 0;
    bool found = false;
    for (; pos <= lenStr-lenSubstr; pos++) {
        found = true;
        for (int i = pos, j = 0; j < lenSubstr; i++, j++) {
            if (str[i] != substr[j]) {
                found = false;
                break;
            }
        }
        if (found)
            break;
    }

    if (found)
        cout << "Substring found at position " << pos+1 << endl;
    else
        cout << "Substring not found" << endl;
    return 0;
}
