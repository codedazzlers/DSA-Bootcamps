/* program description
   program to find sum of array elements */


#include <iostream>
using namespace std;

int main()
{
    int MAX_SIZE=100;
    int arr[MAX_SIZE];
    int i, n, sum=0;

    /* Input size of the array */
    cout<<"Enter size of the array: ";
    cin>>n;

    /* Input elements in array */
    cout<<"Enter "<<n<<" elements in the array: ";
    for(i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    /*
     * Add each array element to sum
     */
    for(i=0; i<n; i++)
    {
        sum = sum + arr[i];
    }


    cout<<"Sum of all elements of array: "<<sum;

    return 0;
}
