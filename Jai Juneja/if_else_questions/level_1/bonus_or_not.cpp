#include <iostream>

using namespace std;

int main() {
    float salary, bonus = 0;
    int yearsOfService;

    cout << "Give Salary: ";
    cin >> salary;
    cout << "Give years of service: ";
    cin >> yearsOfService;

    if (yearsOfService > 5)
        bonus = 0.05 * salary;

    cout << "Net Bonus Amount: " << bonus << endl;

    return 0;
}
