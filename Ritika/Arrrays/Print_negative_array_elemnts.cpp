
#include <iostream>
using namespace std;

#define MAX_SIZE 100

int main()
{
    int arr[MAX_SIZE];
    int i, size;

    cout<<"Enter the size of an array:"<<endl;
    cin>>size;
    cout<<"Enter the elements of an array:"<<endl;

    for(i=0; i<size; i++)
    {
       cin>>arr[i];
    }

    cout<<"All negative elements in array are : "<<endl;
    for(i=0; i<size; i++)
    {

        if(arr[i] < 0)
        {
            cout<<arr[i]<<endl;
        }
    }

    return 0;
}
