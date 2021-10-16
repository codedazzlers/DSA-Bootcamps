#include <iostream>
using namespace std;
int main()
{
  int a[10], i,seclarge,large;
  cout << "enter the array\n";
  for (i = 0; i < 10; i++)
  {
    cin >> a[i];
  }
  
   large=a[0];
    for (i = 1; i < 10; i++)
    {
      if (large<a[i])
      {seclarge=large;
        large=a[i];

      }
    }
  
  cout<<"\nsecond largest:"<<seclarge; 
  return 0;
}