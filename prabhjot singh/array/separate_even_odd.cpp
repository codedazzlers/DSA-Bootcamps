#include <iostream>
using namespace std;
int main()
{
  int even[5], odd[5], a[5], i, j, k,f,s,m;
  cout << "\nenter the size of  array(max.5):";
  cin >> m;
  cout << "\nenter the  array:";
  for (i = 0; i < m; i++)
  {
    cin >> a[i];
  }
  i = 0, j = 0;
  for (i = 0; i < m; i++)
  {
    if (a[i]%2==0)
    {
      even[j] = a[i];
      j++;
    }
    else
    {
      odd[k] = a[i];
      k++;
    }
  }
  f=j;
  s=k;
  cout << "\n array  of even nummbers:\n";
  for (j = 0; j < f; j++)
    cout <<even[j] << " ";
  cout << "\n array  of odd nummbers:\n";
  for (k = 0; k < s; k++)
    cout <<odd[k] << " ";
  
  return 0;
}