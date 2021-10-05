/*C program to read and print elements in an array*/
//time and space complexity O(n)
#include <iostream>
using namespace std;
int sumOfAll(int arr[],int n,int i){
   if(i==n)
     return 0;
  return arr[i]+sumOfAll(arr,n,i+1);
}
int main()
{
    int i, n;
    /* Input array size */
    cout<<"Enter size of array: ";
     cin>>n;
     int arr[n];
    /* Input elements in array */
    cout<<"Enter "<<n<<" elements in the array : ";
    for(i=0; i<n; i++)
    {
      cin>>arr[i];
    }
   cout<<"Sum Of All Elements = " << sumOfAll(arr,n,0);

    return 0;
}