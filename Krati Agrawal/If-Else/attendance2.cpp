#include <iostream>
using namespace std;
int main()
{
    float total_classes, total_attended;
    cout << "Enter the number of classes held : ";
    cin >> total_classes;
    cout << "Enter the number of classes attended : ";
    cin >> total_attended;
    float attendance = (total_attended / total_classes) * 100;
    cout << "Your attendance percentage is " << attendance << "%" << endl;
    if (attendance >= 75)
    {
        cout << "You are permitted to write your exam";
    }
    else
    {
        cout << "Is the cause of your absence because of medical issues (Y/N) ?";
        char input;
        cin >> input;
        if (input == 'Y' || input == 'y')
            cout << "You are permitted to write your exam";
        else if (input == 'N' || input == 'n')
            cout << "You are NOT permitted to write your exam";
        else
            cout << "Invalid Character";
    }
    return 0;
}
