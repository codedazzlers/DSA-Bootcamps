/* program description
   program to find sum of array elements */


#include <iostream>
using namespace std;


int main()
{
    int MAX_SIZE=100;
    int arr[MAX_SIZE];  // Declares array of size 100
    int i, size, count = 0;

    /* Input size of array */
    cout<<"Enter size of the array : ";
    cin>>size;


    /* Input array elements */
    cout<<"Enter elements in array : ";
    for(i=0; i<size; i++)
    {
        cin>>arr[i];
    }

    /*
     * Count total negative elements in array
     */
    for(i=0; i<size; i++)
    {
        /* Increment count if current array element is negative */
        if(arr[i] < 0)
        {
            count++;
        }
    }

    cout<<"\nTotal negative elements in array = "<<count<<endl;

    return 0;
}
