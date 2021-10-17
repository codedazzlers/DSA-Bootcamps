#include <iostream>
using namespace std;
int main()
{int n,i;
cin>>n;


 int arr[n];
   for(i=0;i<n;i++)
      cin>> arr[i];
 
 int maxNo=INT_MIN;
 int minNo=INT_MAX;
 
  for(i=0;i<n;i++)
    {
	  maxNo=max(maxNo,arr[i]);
     minNo=min(minNo,arr[i]);
       }
 
  cout<<maxNo<<" "<<minNo<<endl;
	     
  
 return 0;
}
