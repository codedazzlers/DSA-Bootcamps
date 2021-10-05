//cpp program to delete duplicate elements from array
//time complexity O(n^3) and space O(1)
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

    /*
     * Find all duplicate elements in array
     */
    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
           if(arr[i] == arr[j])
            {
                /* Delete the current duplicate element */
                for(int k=j; k < n - 1; k++)
                {
                    arr[k] = arr[k + 1];
                }

                /* Decrement size after removing duplicate element */
                n--;

                /* If shifting of elements occur then don't increment j */
                j--;
            }
        }
    }

   cout<<"\nArray elements after deleting duplicates : "<<endl;
    for(i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }


    return 0;
}