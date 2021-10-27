/* program description
   program to find reverse of array */

#include <iostream>
using namespace std;


int main()
{
    int MAX_SIZE=100;
    int arr[MAX_SIZE];
    int size, i;

    /* Input size of array */
    cout<<"Enter size of the array: ";
    cin>>size;

    /* Input array elements */
    printf("Enter elements in array: ");
    for(i=0; i<size; i++)
    {
        cin>>arr[i];
    }

    /*
     * Print array in reversed order
     */
    cout<<"\nArray in reverse order: ";
    for(i = size-1; i>=0; i--)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}
