/* program description
   program to delete duplicate elements from array */

#include <iostream>
using namespace std;

int main()
{
    int MAX_SIZE=100 ;
    int arr[MAX_SIZE]; // Declares an array of size 100
    int size;          // Total number of elements in array
    int i, j, k;       // Loop control variables

    /* Input size of the array */
    cout<<"Enter size of the array : ";
    cin>>size;

    /* Input elements in the array */
    cout<<"Enter elements in array : ";
    for(i=0; i<size; i++)
    {
        cin>>arr[i];
    }


    /*
     * Find duplicate elements in array
     */
    for(i=0; i<size; i++)
    {
        for(j=i+1; j<size; j++)
        {
            /* If any duplicate found */
            if(arr[i] == arr[j])
            {
                /* Delete the current duplicate element */
                for(k=j; k < size - 1; k++)
                {
                    arr[k] = arr[k + 1];
                }

                /* Decrement size after removing duplicate element */
                size--;

                /* If shifting of elements occur then don't increment j */
                j--;
            }
        }
    }


    /*
     * Print array after deleting duplicate elements
     */
    cout<<"\nArray elements after deleting duplicates : ";
    for(i=0; i<size; i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}
