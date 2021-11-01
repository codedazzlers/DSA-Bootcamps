#include <iostream>
#include <string>
using namespace std;

int main()

{
    int i;
    string s;
    cout << "Enter a String:" << endl;
    getline(cin, s);
    for (i = 0; s[i] != '\0'; i++)
        ;
    cout << "Length of string is: " << i << endl;

    return 0;
}
