#include <iostream>
using namespace std;

int main()
{
    string str, strr, result;
    cout << "Enter first string : ";
    getline (cin, str);
    cout << "Enter second string: ";
    getline (cin, strr);
    if(str==strr){
        cout << "Equal strings";
    }
    else
        cout << "Not equal";
    return 0;
}