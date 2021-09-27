
#include <iostream>
using namespace std;
#define MAX_SIZE 100

int main()
{
    int arr[MAX_SIZE];
    int size, i;
    cout<<"Enter size of the array: "<<endl;
    cin>>size;

    cout<<"Enter elements in array: "<<endl;
    for(i=0; i<size; i++)
    {
        cin>>arr[i];
    }

    cout<<"Array in reverse order: "<<endl;
    for(i = size-1; i>=0; i--)
    {
        cout<<arr[i]<<"\t";
    }

    return 0;
}
