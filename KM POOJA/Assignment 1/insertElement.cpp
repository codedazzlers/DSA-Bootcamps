//C program to insert an element in array
//time complexity O(n) and space O(1)
/*
Example

Input

Input array elements: 10, 20, 30, 40, 50
Input element to insert: 25
Input position where to insert: 3
Output

Elements of array are: 10, 20, 25, 30, 40, 50 */

#include <iostream>
using namespace std;
int main()
{
    int i, n;
    /* Input array size */
    cout<<"Enter size of array: ";
     cin>>n;
     int arr[n];
    /* Input elements in array */
    cout<<"Enter "<<n<<" elements in the array : ";
    for(i=0; i<n; i++)
    {
      cin>>arr[i];
    }
    int num,pos;
    /* Input new element and position to insert */
    cout<<"Enter element to insert : ";
    cin>>num;
    cout<<"Enter the element position : ";
    cin>>pos;

    /* If position of element is not valid */
    if(pos > n+1 || pos <= 0)
    {
        cout<<"Invalid position! Please enter position between 1 to " <<n;
    }
    else
    {
        /* Make room for new array element by shifting to right */
        for(i=n; i>=pos; i--)
        {
            arr[i] = arr[i-1];
        }
        
        /* Insert new element at given position and increment n */
        arr[pos-1] = num;
        n++; 

        /* Print array after insert operation */
        cout<<"Array elements after insertion : ";
        for(i=0; i<n; i++)
        {
            cout<<arr[i]<<" ";
        }
    }

    return 0;
}