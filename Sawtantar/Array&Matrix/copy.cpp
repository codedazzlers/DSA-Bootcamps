#include <iostream>
using namespace std;

int main()
{
    int arr1[10],arr2[10];
    int i,m;

    cout<<"Enter number of elements of first array:"<<endl;
    cin>>m;

    cout<<"Enter elements:"<<endl;
    for (i = 0; i < m; i++)
    {
        cin>>arr1[i];
    }

    for  (i = 0; i < m; i++)
    {
        arr2[i] = arr1[i];
    }

    cout<<"Entered elements are:"<<endl;
    for  (i = 0; i < m; i++)
    {
        cout<<arr1[i]<<"\t";
    }



    cout<<"\n"<<"Copied array is:"<<endl;

    for  (i = 0; i < m; i++)
    {
    cout<<arr2[i]<<"\t";
    }

    return 0;
} 
 