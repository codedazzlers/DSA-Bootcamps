#include <iostream>
using namespace std;
int main()
{int n;
cin>>n;
int i;

 int arr[n];
   for(i=0;i<n;i++)
      cin>> arr[i];
    
  for(i=0;i<n;i++)
     if (arr[i]<0)
	     cout<<arr[i]<<endl;
	     
  
 return 0;
}
