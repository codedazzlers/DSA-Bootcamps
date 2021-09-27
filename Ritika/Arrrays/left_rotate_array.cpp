#include <iostream>
#define SIZE 10
using namespace std;

void printArray(int arr[]);
void rotateByOne(int arr[]);


int main()
{
    int i, N;
    int arr[SIZE];

    cout<<"Enter 10 elements array:" <<endl;
    for(i=0; i<SIZE; i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter number of times to left rotate: "<<endl;
    cin>>N;

    N = N % SIZE;
    cout<<"Array before rotation"<<endl;
    printArray(arr);


    for(i=1; i<=N; i++)
    {
        rotateByOne(arr);
    }
    cout<<"Array after rotation"<<endl;
    printArray(arr);

    return 0;
}


void rotateByOne(int arr[])
{
    int i, first;
    first = arr[0];

    for(i=0; i<SIZE-1; i++)
    {

        arr[i] = arr[i + 1];
    }
    arr[SIZE-1] = first;
}

void printArray(int arr[])
{
    int i;

    for(i=0; i<SIZE; i++)
    {
        cout<<arr[i]<<"\t";
    }
    cout<<endl;
}




