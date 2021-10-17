#include <iostream>

using namespace std;

int main() {
    string str;
    cout << "Give a string: ";
    cin >> str;

    int len = 0;
    for(; str[len] != '\0'; len++);
    
    int i = 0, j = len-1;
    bool isPalindrome = true;
    while (i < j) {
        if (str[i++] != str[j--]) {
            isPalindrome = false;
            break;
        }
    }

    if (isPalindrome)
        cout << "It is palindrome" << endl;
    else
        cout << "It is not palindrome" << endl;
    return 0;
}
