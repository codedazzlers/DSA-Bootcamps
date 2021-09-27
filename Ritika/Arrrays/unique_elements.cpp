#include <iostream>
using namespace std;
#define MAX_SIZE 100

int main()
{
    int arr[MAX_SIZE], freq[MAX_SIZE];
    int size, i, j, count;
    cout<<"Enter size of array: "<<endl;
    cin>>size;
    cout<<"Enter elements in array: "<<endl;
    for(i=0; i<size; i++)
    {
        cin>>arr[i];
        freq[i] = -1;
    }
    for(i=0; i<size; i++)
    {
        count = 1;
        for(j=i+1; j<size; j++)
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
     cout<<"Unique elements in the array are: "<<endl;
    for(i=0; i<size; i++)
    {
        if(freq[i] == 1)
        {
            cout<<arr[i]<<endl;
        }
    }

    return 0;
}
