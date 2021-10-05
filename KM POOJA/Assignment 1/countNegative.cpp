
//time complexity O(n) and space O(1)
#include <iostream>
using namespace std;
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
    int countNegative=0;
    
    for(i=0; i<n; i++)
    {   if(arr[i]<0)
         countNegative++;
    }
    cout<<"There are total "<<countNegative<<" negative elements present in array..."<<endl;
    return 0;
}