#include <iostream>
using namespace std;
int main()
{
    float salary, years;
    cout << "Enter Salary : ";
    cin >> salary;
    cout << "Enter Years of Service : ";
    cin >> years;
    if (years > 5)
    {
        float bonus = (salary * 5) / 100;
        cout << "The net bonus amount is" << bonus << endl;
    }
    else
    {
        cout << "Can't avail bonus" << endl;
    }
    return 0;
}
