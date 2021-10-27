/* program description
   program to find maximum and minimum element in array */



#include <iostream>
using namespace std;

int main()
{
    int MAX_SIZE=100;
    int arr[MAX_SIZE];
    int i, max, min, size;

    /* Input size of the array */
    cout<<"Enter size of the array: ";
    cin>>size;

    /* Input array elements */
    cout<<"Enter elements in the array: ";
    for(i=0; i<size; i++)
    {
        cin>>arr[i];
    }


    /* Assume first element as maximum and minimum */
    max = arr[0];
    min = arr[0];

    /*
     * Find maximum and minimum in all array elements.
     */
    for(i=1; i<size; i++)
    {
        /* If current element is greater than max */
        if(arr[i] > max)
        {
            max = arr[i];
        }

        /* If current element is smaller than min */
        if(arr[i] < min)
        {
            min = arr[i];
        }
    }

    /* Print maximum and minimum element */
    cout<<"Maximum element = "<<max<<endl;
    cout<<"Minimum element = "<<min;

    return 0;
}
