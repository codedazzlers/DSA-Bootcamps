/* program description
    program to put even and odd elements of array in two separate array */


#include <iostream>
using namespace std;

/* Function to print array */
void printArray(int arr[], int len);



int main()
{
    int MAX_SIZE =1000;
    int arr[MAX_SIZE];
    int even[MAX_SIZE], odd[MAX_SIZE];

    int evenCount, oddCount;
    int i, size;

    /* Input size of the array */
    cout<< "Enter size of the array: ";
    cin>>size;

    /* Input elements in array */
    printf("Enter elements in the array: ");
    for(i=0; i<size; i++)
    {
        cin>>arr[i];
    }

    evenCount = 0;
    oddCount = 0;

    for(i=0; i<size; i++)
    {
        // If arr[i] is odd
        if(arr[i] & 1)
        {
            odd[oddCount] = arr[i];
            oddCount++;
        }
        else
        {
            even[evenCount] = arr[i];
            evenCount++;
        }
    }

    cout<<"\nElements of even array: \n";
    printArray(even, evenCount);

    cout<<"\nElements of odd array: \n";
    printArray(odd, oddCount);

    return 0;
}



/**
 * Print the entire integer array
 * @arr Integer array to be displayed or printed on screen
 * @len Length of the array
 */
void printArray(int arr[], int len)
{
    int i;
    cout<<"Elements in the array: ";
    for(i=0; i<len; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
}
