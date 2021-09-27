#include <iostream>
using namespace std;
#define MAX_SIZE 1000

int main()
{
    int a[MAX_SIZE];
    int i, size ;
    cout<<"Enter the size of an array"<<endl;
    cin>>size;
    cout<<"Enter the elements of an array"<<endl;
    for(i=0; i<size; i++)
    {
        cin>>a[i];
    }
    cout<<"The elements of the array are:"<<endl;
    for(i=0; i<size; i++)
    {
        cout<<a[i]<<endl;
    }

    return 0;
}
