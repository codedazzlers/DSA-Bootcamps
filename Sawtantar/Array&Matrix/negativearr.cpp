#include <iostream>
#define MAX_SIZE 100
using namespace std;

int main()
{
    int arr[MAX_SIZE],i,N;
    cout<<"enter number of elements: ";
    cin>>N;
    cout<<endl<<"Enter Array Elements"<<endl;
    for(i=0;i<N;i++)
    {
        cin>>arr[i];
    }
    cout<<endl<<"Negative Elements in array is"<<endl;
    for(i=0;i<N;i++)
    {
    if(arr[i]<0)
    {
        cout<<arr[i]<<"\t";
        
    }
    }
    return 0;
}
