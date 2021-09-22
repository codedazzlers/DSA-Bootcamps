#include <iostream>

using namespace std;

int main() {
    unsigned int age;
    char sex, maritalStatus;
    cout << "Give Age: ";
    cin >> age;
    cout << "Give Sex(m/f): ";
    cin >> sex;
    cout << "Give marital status(y/n for married/single): ";
    cin >> maritalStatus;

    if (sex == 'f')
        cout << "You can work in urban areas only" << endl;
    else if (sex == 'm') {
        if (age>=20 && age<40)
            cout << "You can work anywhere" << endl;
        else if (age>=40 && age<=60)
            cout << "You can work is urban areas only" << endl;
        else
            cout << "ERROR" << endl;
    }

    return 0;
}
