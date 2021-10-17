#include<iostream>
#define MAX_SIZE 100
using namespace std;

int main()
{
    int arr[MAX_SIZE];
    int size, i, toSearch, found;

    cout<<"Enter size of array: "<<endl;
    cin>>size;
    cout<<"Enter elements in array: "<<endl;
    for(i=0; i<size; i++)
    {
        cin>>arr[i];
    }

    cout<<"Enter element to search: "<<endl;
    cin>>toSearch;

    found = 0;

    for(i=0; i<size; i++)
    {

        if(arr[i] == toSearch)
        {
            found = 1;
            break;
        }
    }


    if(found == 1)
    {
        cout<<toSearch<<" is found at position  "<<i+1<<endl;
    }
    else
    {
        cout<<toSearch<<"  is not found in the array"<<endl;
    }

    return 0;
}
