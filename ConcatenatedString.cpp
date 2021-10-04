#include <iostream>
using namespace std;

int main()
{
    string str, strr, result;
    cout << "Enter first string : ";
    getline (cin, str);
    cout << "Enter second string: ";
    getline (cin, strr);
    result = str +" " + strr;
    cout << "Concatenated String = " << result;
    return 0;
}
