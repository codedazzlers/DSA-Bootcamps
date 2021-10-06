#include <iostream>
using namespace std;

int main()
{
    int array[10];
    int i,n;

    cout<<"Enter total elements of an array:"<<endl;
    cin>>n;
    cout<<"Enter array elements:"<<endl;

    for(i=0;i<n;i++)
    {
        cin>>array[i];
    }

        cout<<"Array elements are:"<<endl;

    for(i=0;i<n;i++)
    {
        cout<<array[i]<<"\t";
    }

    cout<<"\n\n"<<"array is:"<<endl;
    for(i=n-1;i>=0;i--)
    {
        cout << array[i]<<"\t";
    }


    return 0;
}