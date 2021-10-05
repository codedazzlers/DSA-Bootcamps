#include <iostream>
using namespace std;
int main()
{
  int marks;
  cout << "enter the marks of student : ";
  cin >> marks;
  if (marks > 80)
    cout << "grade of student : A";
  else if (marks > 60)
    cout << "grade of student : B";
  else if (marks > 50)
    cout << "grade of student : C";
  else if (marks > 45)
    cout << "grade of student : D";
  else if (marks > 25)
    cout << "grade of student : E";
  else
    cout << "grade of student : F";
  return 0;
}