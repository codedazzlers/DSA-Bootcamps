#include <iostream>

using namespace std;

int main() {
    string str;
    cout << "Give a string to count words: ";
    getline(cin, str);

    unsigned int numOfWords = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] != ' ' && (str[i+1] == ' ' || str[i+1] == '\0'))
            numOfWords++;
    }

    cout << "The number of words in the string = " << numOfWords;

    return 0;
}
