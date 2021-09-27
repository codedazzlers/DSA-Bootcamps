#include <iostream>
using namespace std;
int main()
{
    int marks;
    cout << "Enter your marks: ";
    cin >> marks;
    if (marks>= 80 && marks <= 100)
    {
        cout << "Your Grade is A" << endl;
    }
    else if (marks >= 60 && marks < 80)
    {
        cout << "Your Grade is B" << endl;
    }
    else if (marks >= 50 && marks < 60)
    {
        cout << "Your Grade is C" << endl;
    }
    else if (marks >= 45 && marks < 50)
    {
        cout << "Your Grade is D" << endl;
    }
    else if (marks >= 25 && marks < 45)
    {
        cout << "Your Grade is E" << endl;
    }
    else if (marks < 25)
    {
        cout << "Your Grade is F" << endl;
    }
    else
    {
        cout << "Invalid Marks" << endl;
    }

    return 0;
}