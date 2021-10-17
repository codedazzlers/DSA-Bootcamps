#include <iostream>
#define MAX_SIZE 100
using namespace std;

int arr[MAX_SIZE];
int i,n;
int array();

int main()
{
    cout<<"Enter the number of elements:"<<endl;
    cin>>n;

    array();

        cout<<"Elements in the array are:"<<endl;

    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<"  "<<"\t"<<endl;
    }
        
    return 0;
}

int array()
{
    cout<<"Enter "<< n <<" elements in the array:";
        for(i=0;i<n;i++)     
        {
            cin >> arr[i];
        }  

}

 