#include <iostream>

using namespace std;

int
main ()
{
  int a, b;
  cout << "Enter Value of Number A " << endl;
  cin >> a;
  cout << endl << "Enter Vaue of  Number B " << endl;
  cin >> b;
  if (a > b)
    {
      cout << endl << "Number A is greater than B";
    }
  else
    {
      cout << endl << "Number B is greater than A";
    }
    return 0;
}
