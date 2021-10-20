#include <iostream>
#define MAX_SIZE 100
using namespace std;

int arr[MAX_SIZE];
int i,j,n,element,count;

int main()
{
   

    cout<<"Enter the number of elements:"<<endl;
    cin>>n;

    cout<<"Enter "<< n <<" elements in the array:";
    for(i=0;i<n;i++)     
    {
        cin >> arr[i];
    }  

    cout<<"\n"<<"Elements in the array are:"<<"\t";

    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<"  "<<"\t"<<endl;
    }

    cout<<"Enter the element whose frequency is to be calculated:"<<endl;
    cin>>element;

    count=0;
    for(i=0;i<n;i++)
    {
        element = arr[i];
        count++;
    }

    cout<<"Frequency:"<<endl;
    cout<<count<<endl;

    return 0;
}