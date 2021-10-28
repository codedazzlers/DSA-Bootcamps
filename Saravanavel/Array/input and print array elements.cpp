/* program description
   Program to input and print array elements */


#include <iostream>
using namespace std;


int main()
{
    int MAX_SIZE=1000;
    int arr[MAX_SIZE]; // Declare an array of MAX_SIZE
    int i, N;

    /* Input array size */
    cout<<"Enter size of array: ";
    cin>>N;

    /* Input elements in array */
    cout<<"Enter elements in the array : ";
    for(i=0; i<N; i++)
    {
        cin>>arr[i];
    }


    /*
     * Print all elements of array
     */
    cout<<"\nElements in array are: ";
    for(i=0; i<N; i++)
    {
        cout<<arr[i]<<", ";
    }

    return 0;
}
