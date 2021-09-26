#include <iostream>
using namespace std;

#define MAX_SIZE 100

int main()
{
    int arr[MAX_SIZE];
    int i, max, min, size;
    cout<<"Enter size of the array: "<<endl;
    cin>>size;


    cout<<"Enter elements in the array: "<<endl;
    for(i=0; i<size; i++)
    {
        cin>>arr[i];
    }
    max = arr[0];
    min = arr[0];
    for(i=1; i<size; i++)
    {
        if(arr[i] > max)
        {
            max = arr[i];
        }
        if(arr[i] < min)
        {
            min = arr[i];
        }
    }
    cout<<"Maximum element : "<<max<<endl;
    cout<<"Minimum element  : "<<min<<endl;

    return 0;
}
