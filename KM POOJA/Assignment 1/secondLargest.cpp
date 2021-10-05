#include <iostream>
using namespace std;
//time complexity O(n) and space O(1)
int SecondLargest(int arr[],int n){
int max1,max2;
max1 = max2 = INT_MIN;


    /*
     * Check for first largest and second
     */
    for(int i=0; i<n; i++)
    {
        if(arr[i] > max1)
        {
            /*
             * If current element of the array is first largest
             * then make current max as second max
             * and then max as current array element
             */
            max2 = max1;
            max1 = arr[i];
        }
        else if(arr[i] > max2 && arr[i] < max1)
        {
            /*
             * If current array element is less than first largest
             * but is greater than second largest then make it
             * second largest
             */
            max2 = arr[i];
        }
    }
    return max2;
}

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
   cout<<"Second Largest Element is " << SecondLargest(arr,n)<<endl;
  


    return 0;
}