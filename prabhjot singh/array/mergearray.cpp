#include <iostream>
using namespace std;
int main()
{
  int a[10], b[20], c[50], i, j, k, f, s, m;
  cout << "\nenter the size of first array:";
  cin >> f;
  cout << "\nenter the size of second array:";
  cin >> s;
  cout << "\nenter the first array:";
  for (i = 0; i < f; i++)
  {
    cin >> a[i];
  }
  cout << "\nenter the second array:";
  for (j = 0; j < s; j++)
  {
    cin >> b[j];
  }
  i = 0, j = 0;
  m = f + s;
  for (k = 0; k < m; k++)
  {
    if (i < f)
    {
      c[k] = a[i];
      i++;
    }
    else
    {
      c[k] = b[j];
      j++;
    }
  }
  cout << "\n array after merged:\n";
  for (k = 0; k < m; k++)
    cout << c[k] << " ";
  return 0;
}