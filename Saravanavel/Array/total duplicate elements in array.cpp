/* program description
   program count total duplicate elements in array */

#include <iostream>
using namespace std;


int main()
{
    int  MAX_SIZE=100;
    int arr[MAX_SIZE];
    int i, j, size, count = 0;

    /* Input size of array */
    cout<<"Enter size of the array : ";
    cin>>size;

    /* Input elements in array */
    cout<<"Enter elements in array : ";
    for(i=0; i<size; i++)
    {
        cin>>arr[i];
    }

    /*
     * Find all duplicate elements in array
     */
    for(i=0; i<size; i++)
    {
        for(j=i+1; j<size; j++)
        {
            /* If duplicate found then increment count by 1 */
            if(arr[i] == arr[j])
            {
                count++;
                break;
            }
        }
    }

    cout<<"\nTotal number of duplicate elements found in array = "<<count;

    return 0;
}
