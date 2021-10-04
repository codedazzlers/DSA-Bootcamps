#include <iostream>
#include <limits.h>
using namespace std;
int main()
{
    int n ;
    cout << "Enter number of elements : ";
    cin >> n;

    int ar[n];
    cout << "Enter Elements: ";

    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }
    
    int largest = INT_MIN, second = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (largest < ar[i])
        {
            second = largest;
            largest = ar[i];
        }
        else if (ar[i] < largest && ar[i] > second)
        {
            second = ar[i];
        }
    }
    cout << "The second largest element in array is : " << second << endl;
    return 0;
}