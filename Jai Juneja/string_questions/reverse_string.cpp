#include <iostream>

using namespace std;

int main() {
    string str;
    cout << "Give a string to reverse: ";
    getline(cin, str);

    int len=0;
    for(; str[len] != '\0'; len++);

    int i = 0, j = len-1;
    while (i < j) {
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i++;
        j--;
    }

    cout << "Reversed string is " << str;

    return 0;
}
