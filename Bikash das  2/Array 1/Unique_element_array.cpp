#include <iostream>
#define MAX_SIZE 100
using namespace std;

int main()
{
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    int arr[MAX_SIZE], freq[MAX_SIZE];
    cout<<"Enter elements in array: ";
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
        freq[i] = -1;
    }
    for(int i=0; i<n; i++)
    {
        int count = 1;
        for(int j=i+1; j<n; j++)
        {
            if(arr[i] == arr[j])
            {
                count++;
                freq[j] = 0;
            }
        }
 
        if(freq[i] != 0)
        {
            freq[i] = count;
        }
    }
    cout<<"\nUnique elements in the array are: ";
    for(int i=0; i<n; i++)
    {
        if(freq[i] == 1)
        {
            cout<<arr[i];
        }
    }

    return 0;
}
