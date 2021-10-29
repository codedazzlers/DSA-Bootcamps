/* program description
   program to right rotate an array */


#include <iostream>
using namespace std;
int SIZE=10;

void printArray(int arr[]);
void rotateByOne(int arr[]);


int main()
{
    int i, N;
    int arr[SIZE];

    cout<<"Enter 10 elements array: ";
    for(i=0; i<SIZE; i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter number of times to right rotate: ";
    cin>>N;

    /* Actual rotation */
    N = N % SIZE;

    /* Print array before rotation */
    cout<<"Array before rotation \n";
    printArray(arr);

    /* Rotate array n times */
    for(i=1; i<=N; i++)
    {
        rotateByOne(arr);
    }

    /* Print array after rotation */
    cout<<"\n\nArray after rotation\n";
    printArray(arr);

    return 0;
}


void rotateByOne(int arr[])
{
    int i, last;

    /* Store last element of array */
    last = arr[SIZE - 1];

    for(i=SIZE-1; i>0; i--)
    {
        /* Move each array element to its right */
        arr[i] = arr[i - 1];
    }

    /* Copy last element of array to first */
    arr[0] = last;
}


/**
 * Print the given array
 */
void printArray(int arr[])
{
    int i;

    for(i=0; i<SIZE; i++)
    {
        cout<<arr[i]<<" ";
    }
}
