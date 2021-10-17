#include <iostream>
using namespace std;
int
main ()
{
  int n;
  cout << "enter no." << endl;
  cin >> n;

  if (n < 25)
    {

      cout << "F";
    }
  else if ( n < 45)
    {

      cout << "E";
    }
  else if ( n < 50)
    {

      cout << "D";
    }
  else if ( n < 60)
    {

      cout << "C";
    }
  else if (n < 80)
    {

      cout << "B";
    }
  else if (80 < n)
    {

      cout << "A";
    }

  return 0;
}
