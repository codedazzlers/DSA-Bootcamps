#include <iostream>
using namespace std;
//time complexity O(n) and space O(1)
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
    
    int countOdd=0;
    int countEven=0;
    for(i=0; i<n; i++)
    {
        if(arr[i]%2==0){
            countEven++;
        }
        else
        countOdd++;   
    }
    cout<<"There are total "<<countEven<<" even and "<<countOdd<<" odd elements"<<endl;

    return 0;
}