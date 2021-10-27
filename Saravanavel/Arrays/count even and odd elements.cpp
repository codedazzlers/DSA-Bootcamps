/* program description
   program to count even and odd elements in array */

#include <iostream>
using namespace std;

int main()
{
    int MAX_SIZE=100;
    int arr[MAX_SIZE];
    int i, size, even, odd;

    /* Input size of the array */
    cout<<"Enter size of the array: ";
    cin>>size;

    /* Input array elements */
    cout<<"Enter  elements in array: ";
    for(i=0; i<size; i++)
    {
        cin>>arr[i];
    }

    /* Assuming that there are 0 even and odd elements */
    even = 0;
    odd  = 0;

    for(i=0; i<size; i++)
    {
        /* If the current element of array is even then increment even count */
        if(arr[i]%2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }

    cout<<"Total even elements: "<<even<<endl;
    cout<<"Total odd elements: "<<odd<<endl;

    return 0;
}
