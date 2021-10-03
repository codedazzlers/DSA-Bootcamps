#include <iostream>
using namespace std;
int main()
{
    int age1, age2, age3;
    cout << "enter age of person1:";
    cin >> age1;
    cout << "\nenter age of person2:";
    cin >> age2;
    cout << "\nenter age of person3:";
    cin >> age3;
    if (age1 > age2 && age1 > age3)
        cout << "Person1 is oldest among three";
    else
    {
        if (age2 > age1 && age2 > age3)
            cout << "Person2 is oldest among three";
        else
        {
            if (age3 > age1 && age3 > age2)
                cout << "Person3 is oldest among three";
        }
    }

    if (age1 < age2 && age1 < age3)
        cout << "|\nPerson1 is youngest among three";
    else
    {
        if (age2 < age1 && age2 < age3)
            cout << "\nPerson2 is youngest among three";
        else
        {
            if (age3 < age1 && age3 < age2)
                cout << "\nPerson3 is youngest among three";
        }
    }

    return 0;
}