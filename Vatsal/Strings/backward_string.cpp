#include <iostream>
#include <string>
using namespace std;

int main()

{
    int i, j;
    string s;
    cout << "Enter a String:" << endl;
    getline(cin, s);
    for (i = 0; s[i]; i++)
        ;
    cout << "Reversed string is :" << endl;
    for (j = i - 1; j >= 0; j--)
    {
        cout << s[j];
    }
    return 0;
}
