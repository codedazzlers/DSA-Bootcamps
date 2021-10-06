//C++ program to count frequency of each element in an array
//time complexity O(n^2) and space O(1)
#include <iostream>
using namespace std;

int main()
{
   int i, n,j;
    /* Input array size */
    cout<<"Enter size of array: ";
     cin>>n;
     int arr[n],freq[n];
     int count;
    /* Input elements in array */
    cout<<"Enter "<<n<<" elements in the array : ";
    for(i=0; i<n; i++)
    {
      cin>>arr[i];
        /* Initially initialize frequencies to -1 */
        freq[i] = -1;
    }


    for(i=0; i<n; i++)
    {
        count = 1;
        for(j=i+1; j<n; j++)
        {
            /* If duplicate element is found */
            if(arr[i]==arr[j])
            {
                count++;

                /* Make sure not to count frequency of same element again */
                freq[j] = 0;
            }
        }

        /* If frequency of current element is not counted */
        if(freq[i] != 0)
        {
            freq[i] = count;
        }
    }

    /*
     * Print frequency of each element
     */
    cout<<"Unique elements in the array are: "<<endl;
    for(i=0; i<n; i++)
    {
        if(freq[i] ==1)
        {
            cout<<arr[i]<<" ";
        }
    }

    return 0;
}