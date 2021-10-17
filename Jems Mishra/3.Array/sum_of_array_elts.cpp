#include <iostream>
#define MAX_LENGTH 20
using namespace std;

int arr[MAX_LENGTH];
int i,n,sum;

int main()
{
    cout<<"Enter the number of elements:"<<endl;
    cin>>n;

    cout<<"Enter array elements:"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    
    cout<<"array is:" << endl;
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<"  "<<"\t"<<endl;
    }
    
    for(i=0;i<n;i++)
    {
        sum=sum+arr[i];
    }

    cout<<"Sum of all elements of an array is:"<<sum<<endl;    

    return 0;
}   



  