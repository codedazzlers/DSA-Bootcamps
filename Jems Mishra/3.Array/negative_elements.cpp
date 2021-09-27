#include <iostream>
using namespace std;

int main()
{
    int array[10];
    int i,n,neg;

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

    neg=0;

    for(i=0;i<n;i++)
    {
        if (array[i]<0)
        {
            neg++;
        }
        
    }
        cout<<"\n"<<"Total Negative elements are:"<<endl;
        cout<<neg<<endl;

    return 0;
}