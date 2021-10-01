#include <iostream>
using namespace std;
int main()
{
    int age_1, age_2, age_3;
    cout << "Enter the age of 3 peoples:";
    cin >> age_1 >> age_2 >> age_3;
    if (age_1 > age_2 and age_1 > age_3)
    {
        cout << "person 1 is oldest"<<endl;
        if (age_2 > age_3)
        {
            cout << "person 3 is youngest";
        }
        else
            cout << "person 2 is youngest";
    }
    else if (age_2 > age_3 and age_2 > age_1)
    {
        cout << "person 2 is oldest"<<endl;
        if (age_1 > age_3)
        {
            cout << "person 3 is youngest";
        }
        else
            cout << "person 1 is youngest";
    }
    else if (age_3 > age_2 and age_3 > age_1)
    {
        cout << "person 3 is oldest"<<endl;
        if (age_2 > age_1)
        {
            cout << "person 1 is youngest";
        }
        else
            cout << "person 2 is youngest";
    }
    return 0;
}