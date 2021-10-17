#include <iostream>

using namespace std;

int main()
{
    char letter;
    cout << "Enter a letter: ";
    cin >> letter;
    if(letter>=65&&letter<=90){
        cout << "  uppercase character : " << letter;
    }
    else if(letter>=97&& letter<=122){
        cout << "lowercase character : " << letter;
    }
    else{
        cout << "Incorrect";
    }

}