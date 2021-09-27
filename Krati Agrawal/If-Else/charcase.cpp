#include <iostream>

using namespace std;

int main()
{
    char ch;
    cout << "Enter character: ";
    cin >> ch;

    if(ch >= 65 && ch <= 90)
        cout<< "You entered an uppercase character";
    else if(ch >= 97 && ch <= 122)
        cout <<"You entered a lowercase character";
    else{
        cout<<"Invalid Character!";
    }
    return 0;
}