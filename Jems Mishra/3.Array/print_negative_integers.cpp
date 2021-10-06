#include <iostream>
using namespace std;

int main()
{
    int arr[10]={12,-13,33,-44,-8};
    int i;

    cout<<"Negative elements in the array are:"<<endl;
    
    for(i=0;i<5;i++)
    {
        if (arr[i] < 0)
        {
            cout<<arr[i]<<"\t";
        }
    }
    return 0;
}   

