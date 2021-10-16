#include <iostream>

using std::cout; using std::cin;

int main() {
    int age;
    char sex, martial_status;
    cin >> age;
    cin >> sex;
    cin >> martial_status;

    if (sex == 'F')
        cout << "Works in Urban Area\n";
    else if (sex == 'M') {
        if (age >= 20 && age <=40) 
            cout << "Can work Anywhere\n";
        else if (age >40 and age <= 60)
            cout << "Can work in Urban Area Only\n";
        else
            cout << "ERROR";
    }
    return 0;
}