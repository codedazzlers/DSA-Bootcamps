#include <iostream>

#define MAX_SIZE 100 
using namespace std;

int main()
{
    int n, count = 0;
    cout<<"Enter size of the array : "<<endl;
    cin>>n;
    int arr[MAX_SIZE];
    cout<<"Enter elements in array : "<<endl;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(arr[i] == arr[j])
            {
                count++;
                break;
            }
        }
    }

    cout<<"\nTotal number of duplicate elements found in array = "<< count<<endl;

    return 0;
}
