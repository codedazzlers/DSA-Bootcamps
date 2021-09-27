
#include <iostream>
using namespace std;

#define MAX_SIZE 1000

void printArray(int arr[], int len);



int main()
{
    int arr[MAX_SIZE];
    int even[MAX_SIZE], odd[MAX_SIZE];

    int evenCount, oddCount;
    int i, size;
    cout<<"Enter size of the array: "<<endl;
    cin>>size;
    cout<<"Enter elements in the array: "<<endl;
    for(i=0; i<size; i++)
    {
        cin>>arr[i];
    }

    evenCount = 0;
    oddCount = 0;

    for(i=0; i<size; i++)
    {
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

    cout<<"Elements of even array: "<<endl;
    printArray(even, evenCount);

    cout<<"Elements of odd array: "<<endl;
    printArray(odd, oddCount);

    return 0;
}

void printArray(int arr[], int len)
{
    int i;
    cout<<"Elements in the array: "<<endl;
    for(i=0; i<len; i++)
    {
        cout<<arr[i]<<"\t";
    }
    cout<<endl;
}
