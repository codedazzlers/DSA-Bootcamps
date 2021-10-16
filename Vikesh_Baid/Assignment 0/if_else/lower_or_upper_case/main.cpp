#include <iostream>

using std::cout;
using std::cin;

int main() {
    char alpha;
    cin >> alpha;
    if (int(alpha) >= 65 && int(alpha) <=90) {
        cout << "Given Letter is in Upper Case\n";
    }
    else if (int(alpha) >= 97 && int(alpha) <= 122) {
        cout << "Given Letter is in Lower Case\n";
    }
    return 0;
}