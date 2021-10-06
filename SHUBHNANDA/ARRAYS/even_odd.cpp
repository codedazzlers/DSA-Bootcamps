#include <iostream>
using namespace std;
int main()
{int n,even=0,odd=0;
cin>>n;
int i;

 int arr[n];
   for(i=0;i<n;i++)
      cin>> arr[i];
    
  for(i=0;i<n;i++)
     {
	 if (arr[i]%2==0)
	     even++;
	 else
	     odd++;
	     
     }
  cout<<even<<" "<<odd<<endl;
 return 0;
}
