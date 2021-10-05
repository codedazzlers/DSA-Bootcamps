#include <iostream>

using namespace std;

int main() {
    int marks;
    
    cout << "Give Marks: ";
    cin >> marks;

    char grade;

    if (marks > 80)             // 81 and above
        grade = 'A';
    else if (marks > 60)        // 61 - 80
        grade = 'B';
    else if (marks > 50)        // 51 - 60
        grade = 'C';
    else if (marks > 45)        // 46 - 50
        grade = 'D';
    else if (marks > 25)        // 26 - 45
        grade = 'E';
    else                        // 25 and below
        grade = 'F';
    
    cout << "Your grade is " << grade;

    return 0;
}
