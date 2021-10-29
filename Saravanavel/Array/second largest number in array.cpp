/* program description
    program to find second largest number in array */

#include <iostream>
using namespace std;

int main()
{
    int MAX_SIZE=1000;
    int arr[MAX_SIZE], size, i;
    int max1, max2;

    /* Input size of the array */
    cout<<"Enter size of the array (1-1000): ";
    cin>>size;

    /* Input array elements */
    cout<<"Enter elements in the array: ";
    for(i=0; i<size; i++)
    {
        cin>>arr[i];
    }

    max1 = max2 = INT_MIN;


    /*
     * Check for first largest and second
     */
    for(i=0; i<size; i++)
    {
        if(arr[i] > max1)
        {
            /*
             * If current element of the array is first largest
             * then make current max as second max
             * and then max as current array element
             */
            max2 = max1;
            max1 = arr[i];
        }
        else if(arr[i] > max2 && arr[i] < max1)
        {
            /*
             * If current array element is less than first largest
             * but is greater than second largest then make it
             * second largest
             */
            max2 = arr[i];
        }
    }

    cout<<"First largest = "<<max1<<endl;
    cout<<"Second largest = "<<max2;

    return 0;
}
