/* program description
   program to delete element from an array */


#include <iostream>
using namespace std;

int main()
{
    int MAX_SIZE =100;
    int arr[MAX_SIZE];
    int i, size, pos;

    /* Input size and element in array */
    cout<<"Enter size of the array : ";
    cin>>size;
    cout<<"Enter elements in array : ";
    for(i=0; i<size; i++)
    {
        cin>>arr[i];
    }

    /* Input element position to delete */
    cout<<"Enter the element position to delete : ";
    cin>>pos;


    /* Invalid delete position */
    if(pos < 0 || pos > size)
    {
        cout<<"Invalid position! ";
    }
    else
    {
        /* Copy next element value to current element */
        for(i=pos-1; i<size-1; i++)
        {
            arr[i] = arr[i + 1];
        }

        /* Decrement array size by 1 */
        size--;

        /* Print array after deletion */
        cout<<"\nElements of array after delete are : ";
        for(i=0; i<size; i++)
        {
            cout<<arr[i];
        }
    }

    return 0;
}
