#include <iostream>

#define MAX_SIZE 100
using namespace std;

int main()
{
    int n;
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
                for(int k=j; k < n - 1; k++)
                {
                    arr[k] = arr[k + 1];
            	}	
                n--;
                j--;
            }
        }
    }
    cout<<"\nArray elements after deleting duplicates : "<<endl;
    for(int i=0; i<n; i++)
    {
        cout<<"\t"<<arr[i];
    }

    return 0;
}
