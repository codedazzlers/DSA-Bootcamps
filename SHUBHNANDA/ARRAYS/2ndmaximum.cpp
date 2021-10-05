#include <iostream>
using namespace std;
int main()
{int n,i;
cin>>n;


 int arr[n];
   for(i=0;i<n;i++)
      cin>> arr[i];
 
 int maxNo=INT_MIN;
 int maxNo2=INT_MAX;
 
  for(i=0;i<n;i++)
    {
	    if(arr[i]>maxNo)
	    {maxNo2=maxNo;
	     maxNo=arr[i];
		}
		else
		{ if(arr[i]>maxNo2 && arr[i]<maxNo)
		   maxNo2=arr[i];
		}
       }
 
  cout<<maxNo2<<endl;
	     
  
 return 0;
}
