#include <iostream>
using namespace std;

int main()
{
    string str;
    cout << "Enter a string: " << endl;
    getline(cin, str);

    int words = 1;

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ' ')
        {
            words++;
        }
    }

    cout << "The number of words = " << words << endl;

    return 0;
}
