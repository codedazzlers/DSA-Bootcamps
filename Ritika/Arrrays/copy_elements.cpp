#include <iostream>
using namespace std;
#define MAX_SIZE 100

int main()
{
    int source[MAX_SIZE], dest[MAX_SIZE];
    int i, size;


    cout<<"Enter the size of the array : "<<endl;
    cin>>size;


    cout<<"Enter elements of source array : "<<endl;
    for(i=0; i<size; i++)
    {
        cin>>source[i];
    }


    for(i=0; i<size; i++)
    {
        dest[i] = source[i];
    }


    cout<<"Elements of source array are : "<<endl;
    for(i=0; i<size; i++)
    {
        cout<<source[i]<<"\t";
    }

    cout<<"Elements of the destination array are:"<<endl;
    for(i=0; i<size; i++)
    {
        cout<<dest[i]<<"\t";
    }

    return 0;
}
