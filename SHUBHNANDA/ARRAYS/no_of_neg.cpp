#include <iostream>
using namespace std;
int main()
{int n,i,neg=0;
cin>>n;


 int arr[n];
   for(i=0;i<n;i++)
      cin>> arr[i];
    
  for(i=0;i<n;i++)
     {
	 if (arr[i]<0)
	     neg++;
      }
 cout<<neg<<endl;
	     
  
 return 0;
}
