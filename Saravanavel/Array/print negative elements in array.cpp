/* program description
   program to print all negative elements in array */

#include <iostream>
using namespace std;

int main()
{
    int MAX_SIZE=100 ;
    int arr[MAX_SIZE]; // Declare array of MAX_SIZE
    int i, N;

    /* Input size of the array */
    cout<<"Enter size of the array : ";
    cin>>N;

    /* Input elements in the array */
    cout<<"Enter elements in array : ";
    for(i=0; i<N; i++)
    {
        cin>>arr[i];
    }

    cout<<"\nAll negative elements in array are : ";
    for(i=0; i<N; i++)
    {
        /* If current array element is negative */
        if(arr[i] < 0)
        {
            cout<<arr[i];
        }
    }

    return 0;
}
