//c++ program count total duplicate elements in array
//time complexity O(n^2) and space O(1)
#include <iostream>
using namespace std;
int main()
{
    int i,j, n;
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

    int count=0;
    /*
     * Find all duplicate elements in array
     */
    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
            /* If duplicate found then increment count by 1 */
            if(arr[i] == arr[j])
            {
                count++;
                break;
            }
        }
    }

    cout<<"Total number of duplicate elements found in array "<<count;


    return 0;
}