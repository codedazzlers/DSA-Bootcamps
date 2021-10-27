/* program description
  program to insert an element in array */

#include <iostream>
using namespace std;

int main()
{
    int MAX_SIZE=100;
    int arr[MAX_SIZE];
    int i, size, num, pos;

    /* Input size of the array */
    cout<<"Enter size of the array : ";
    cin>>size;

    /* Input elements in array */
    cout<<"Enter elements in array : ";
    for(i=0; i<size; i++)
    {
        cin>>arr[i];
    }

    /* Input new element and position to insert */
    cout<<"Enter element to insert : ";
    cin>>num;
    cout<<"Enter the element position : ";
    cin>>pos;

    /* If position of element is not valid */
    if(pos > size+1 || pos <= 0)
    {
        cout<<"Invalid position! ";
    }
    else
    {
        /* Make room for new array element by shifting to right */
        for(i=size; i>=pos; i--)
        {
            arr[i] = arr[i-1];
        }

        /* Insert new element at given position and increment size */
        arr[pos-1] = num;
        size++;

        /* Print array after insert operation */
        cout<<"Array elements after insertion : ";
        for(i=0; i<size; i++)
        {
            cout<<arr[i]<<" ";
        }
    }

    return 0;
}
