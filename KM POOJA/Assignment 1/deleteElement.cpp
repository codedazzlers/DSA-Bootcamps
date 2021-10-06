
/*
 * C++ program to delete an element from array at specified position
 */

#include <iostream>
using namespace std;

int main()
{
    int i, n;
    /* Input array n */
    cout<<"Enter size of array: ";
     cin>>n;
     int arr[n];
    /* Input elements in array */
    cout<<"Enter "<<n<<" elements in the array : ";
    for(i=0; i<n; i++)
    {
      cin>>arr[i];
    }
    int pos;
    /* Input element position to delete */
   cout<<"Enter the element position to delete : ";
   cin>>pos;


    /* Invalid delete position */
    if(pos < 0 || pos > n)
    {
       cout<<"Invalid position! Please enter position between 1 to "<<n;
    }
    else
    {
        /* Copy next element value to current element */
        for(i=pos-1; i<n-1; i++)
        {
            arr[i] = arr[i + 1];
        }

        /* Decrement array n by 1 */
        n--;

        /* Print array after deletion */
       cout<<"\nElements of array after delete are : ";
        for(i=0; i<n; i++)
        {
           cout<<arr[i]<<" ";
        }
    }

    return 0;
}