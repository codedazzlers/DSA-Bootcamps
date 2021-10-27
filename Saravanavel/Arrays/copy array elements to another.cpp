/* program description
   rogram to copy all elements of one array to another */



#include <iostream>
using namespace std;

int main()
{
    int MAX_SIZE =100;
    int source[MAX_SIZE], dest[MAX_SIZE];
    int i, size;

    /* Input size of the array */
    cout<<"Enter the size of the array : ";
    cin>>size;

    /* Input array elements */
    cout<<"Enter elements of source array : ";
    for(i=0; i<size; i++)
    {
        cin>>source[i];
    }

    /*
     * Copy all elements from source array to dest array
     */
    for(i=0; i<size; i++)
    {
        dest[i] = source[i];
    }

    /*
     * Print all elements of source array
     */
    printf("\nElements of source array are : ");
    for(i=0; i<size; i++)
    {
        cout<<"\t"<<source[i];
    }

    /*
     * Print all elements of dest array
     */
    cout<<"\nElements of destination array are : ";
    for(i=0; i<size; i++)
    {
        cout<<"\t"<<dest[i];
    }

    return 0;
}
