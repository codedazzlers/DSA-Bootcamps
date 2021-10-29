/* program description
   program to search element in an array */

#include <iostream>
using namespace std;

int main()
{
    int MAX_SIZE =100;
    int arr[MAX_SIZE];
    int size, i, toSearch, found;

    /* Input size of array */
    cout<<"Enter size of array: ";
    cin>>size;

    /* Input elements of array */
    cout<<"Enter elements in array: ";
    for(i=0; i<size; i++)
    {
        cin>>arr[i];
    }

    printf("\nEnter element to search: ");
    cin>>toSearch;

    /* Assume that element does not exists in array */
    found = 0;

    for(i=0; i<size; i++)
    {
        /*
         * If element is found in array then raise found flag
         * and terminate from loop.
         */
        if(arr[i] == toSearch)
        {
            found = 1;
            break;
        }
    }

    /*
     * If element is not found in array
     */
    if(found == 1)
    {
        cout<<toSearch<<" is found at position "<<i + 1<<endl;
    }
    else
    {
        cout<<toSearch<<" is not found in the array";
    }

    return 0;
}
