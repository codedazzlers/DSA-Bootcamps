#include <iostream>
using namespace std;

int main()
{
    int i,max,min;
    int arr[8]={77,41,33,98,24,5,64,59};

    cout<<"-----ARRAY-----"<<endl;
    for(i=0;i<8;i++)
    {
    cout<<arr[i]<<"\t";
    }

    max=arr[0];
    min=arr[0];

    for(i=0;i<8;i++)
    {
        if (arr[i]>max)
        {
            max=arr[i];
        }

        if (arr[i]<min)
        {
        min=arr[i];
        }
    }

    cout<<"\n"<<"Maximum element:"<<max<<endl;
    cout<<"Minimum element:"<<min<<endl;

    return 0;
}