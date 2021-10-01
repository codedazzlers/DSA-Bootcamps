#include <iostream>
using namespace std;

int main()
{
    int i,elt,max;
    int arr[8]={77,41,33,98,24,5,64,59};

    cout<<"-----ARRAY-----"<<endl;
    for(i=0;i<8;i++)
    {
    cout<<arr[i]<<"\t";
    }

    elt=arr[0];
    max=arr[0];

    for(i=0;i<8;i++)
    {
        if (arr[i]>max)
        {
            max=arr[i];
        }
    }

        if (arr[i]<max)
        {
            elt=arr[i];
        }

        cout<<"\n\n"<<"Second Largest Elements is:"<<elt<<endl;
    


    return 0;
}

