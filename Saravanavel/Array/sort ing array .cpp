/* program description
   program to sort array in ascending order */
#include <iostream>
using namespace std;

int main()
{
    int MAX_SIZE =100;
    int arr[MAX_SIZE];
    int size;
    int i, j, temp;

    /* Input size of array */
    cout<<"Enter size of array: ";
    cin>>size;

    /* Input elements in array */
    cout<<"Enter elements in array: ";
    for(i=0; i<size; i++)
    {
        cin>>arr[i];
    }

    for(i=0; i<size; i++)
    {
        /*
         * Place currently selected element array[i]
         * to its correct place.
         */
        for(j=i+1; j<size; j++)
        {
            /*
             * Swap if currently selected array element
             * is not at its correct position.
             */
            if(arr[i] > arr[j])
            {
                temp     = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    /* Print the sorted array */
    cout<<"Elements of array in ascending order: ";
    for(i=0; i<size; i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}
