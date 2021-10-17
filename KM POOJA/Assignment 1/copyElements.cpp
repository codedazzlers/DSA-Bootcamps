//C program to copy all elements of one array to another
//time complexity O(n) and space O(n)
#include <iostream>
using namespace std;
int main()
{
    int i, n;
    /* Input array size */
    cout<<"Enter size of array: ";
     cin>>n;
     int arr[n];
     int dest[n];
    /* Input elements in array */
    cout<<"Enter "<<n<<" elements in the array : ";
    for(i=0; i<n; i++)
    {
      cin>>arr[i];
    }
    
   /*
     * Copy all elements from source array to dest array
     */
    for(i=0; i<n; i++)
    {   dest[i]=arr[i];
    }
    /*
     * Print all elements of dest array
     */
    cout<<"Elements of dest array are : "<<endl;
    for(i=0; i<n; i++)
    {
       cout<<dest[i]<<" ";
    }

    return 0;
}