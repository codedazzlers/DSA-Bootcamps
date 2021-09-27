
#include <iostream>
using namespace std;

#define MAX_SIZE 100


int main()
{
    int arr[MAX_SIZE];
    int i, size, count = 0;


    cout<<"Enter size of the array : "<<endl;
    cin>>size;



    cout<<"Enter elements in array : "<<endl;
    for(i=0; i<size; i++)
    {
        cin>>arr[i];
    }

    for(i=0; i<size; i++)
    {

        if(arr[i] < 0)
        {
            count++;
        }
    }

    cout<<"Total negative elements in array  " <<count<<endl;

    return 0;
}
