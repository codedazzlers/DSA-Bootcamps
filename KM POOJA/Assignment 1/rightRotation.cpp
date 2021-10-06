//C++ program to left rotate an array
// C++ program to rotate an array by
// d elements

//time complexity O(n) and space O(1)

// Example

// Input

// Input 10 elements in array: 1 2 3 4 5 6 7 8 9 10
// Input number of times to rotate: 3
// Output

// Array after left rotation 3 times: 4 5 6 7 8 9 10 1 2 3

#include <bits/stdc++.h>
using namespace std;
 
/*Function to left Rotate arr[] of
  size n by 1*/
void rightRotatebyOne(int arr[], int n)
{
    int temp = arr[n-1], i;
    for (i = n-1; i >0; i--)
        arr[i] = arr[i -1];
 
    arr[0] = temp;
}
 
/*Function to left rotate arr[] of size n by d*/
void rightRotate(int arr[], int d, int n)
{
    for (int i = 0; i < d; i++)
        rightRotatebyOne(arr, n);
}
 
/* utility function to print an array */
void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
}
 
/* Driver program to test above functions */
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
    int d;
    cout<<"Enter number of times to left rotate: ";
    cin>>d;
     
     cout<<"Array before rotation : "<<endl;
     printArray(arr, n);
 
    // Function calling
    rightRotate(arr, d, n);
    cout<<"\nArray after rotation : "<<endl;
    printArray(arr, n);
 
    return 0;
}