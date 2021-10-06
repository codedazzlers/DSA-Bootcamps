#include <iostream>
using namespace std;
int main()
{int n,i,sum=0;
cin>>n;



 int arr[n];
   for(i=0;i<n;i++)
      cin>> arr[i];
    
  for(i=0;i<n;i++)
     sum=arr[i]+sum;
	     
		 
  cout<<sum<<endl;
	     
  
 return 0;
}
